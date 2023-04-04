#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num;
	listint_t *tp = *head;

	num = malloc(sizeof(listint_t));
	if (!num)
		return (NULL);

	num->n = n;
	num->next = NULL;

	if (*head == NULL)
	{
		*head = num;
		return (num);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = num;

	return (num);
}
