#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *new_num;
	listint_t *temp_num = *head;

	new_num = malloc(sizeof(listint_t));
	if (!new_num || !head)
		return (NULL);

	new_num->n = n;
	new_num->next = NULL;

	if (idx == 0)
	{
		new_num->next = *head;
		*head = new_num;
		return (new_num);
	}

	for (y = 0; temp_num && y < idx; y++)
	{
		if (y == idx - 1)
		{
			new_num->next = temp_num->next;
			temp_num->next = new_num;
			return (new_num);
		}
		else
			temp_num = temp_num->next;
	}

	return (NULL);
}
