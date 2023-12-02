#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_tt;
	unsigned long int i;

	sh_tt = malloc(sizeof(shash_table_t));
	if (sh_tt == NULL)
		return (NULL);
	sh_tt->size = size;
	sh_tt->shead = NULL;
	sh_tt->stail = NULL;
	sh_tt->array = malloc(sizeof(shash_node_t) * size);
	if (sh_tt->array == NULL)
	{
		free(sh_tt);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sh_tt->array[i] = NULL;
	}
	return (sh_tt);
}

/**
 * make_shash_node - makes a node for the sorted hash table
 * @key: key for the data
 * @value: data to be stored
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *sh_nt;

	sh_nt = malloc(sizeof(shash_node_t));
	if (sh_nt == NULL)
		return (NULL);
	sh_nt->key = strdup(key);
	if (sh_nt->key == NULL)
	{
		free(sh_nt);
		return (NULL);
	}
	sh_nt->value = strdup(value);
	if (sh_nt->value == NULL)
	{
		free(sh_nt->key);
		free(sh_nt);
		return (NULL);
	}
	sh_nt->next = sh_nt->snext = sh_nt->sprev = NULL;
	return (sh_nt);
}

/**
 * add_to_sorted_list - add a node to the sorted (by key's ASCII) linked list
 * @table: the sorted hash table
 * @node: the node to add
 *
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp_node;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	temp_node = table->shead;
	while (temp_node != NULL)
	{
		if (strcmp(node->key, temp_node->key) < 0)
		{
			node->snext = temp_node;
			node->sprev = temp_node->sprev;
			temp_node->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp_node = temp_node->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - sets a key to a value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: data to add
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *new_val;
	shash_node_t *sh_nt, *temp_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[idx];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			new_val = strdup(value);
			if (new_val == NULL)
				return (0);
			free(temp_node->value);
			temp_node->value = new_val;
			return (1);
		}
		temp_node = temp_node->next;
	}
	sh_nt = make_shash_node(key, value);
	if (sh_nt == NULL)
		return (0);
	sh_nt->next = ht->array[idx];
	ht->array[idx] = sh_nt;
	add_to_sorted_list(ht, sh_nt);
	return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to the data
 *
 * Return: the value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *temp_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[idx];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	char f = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp_node = ht->shead;
	while (temp_node != NULL)
	{
		if (f == 1)
			printf(", ");
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		f = 1;
		temp_node = temp_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	char f = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp_node = ht->stail;
	while (temp_node != NULL)
	{
		if (f == 1)
			printf(", ");
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		f = 1;
		temp_node = temp_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
