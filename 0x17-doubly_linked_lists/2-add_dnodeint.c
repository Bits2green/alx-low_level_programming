#include "lists.h"

/**
 * add_dnodeint - add a new_node node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new_node node
 *
 * Return: pointer to the new_node node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
