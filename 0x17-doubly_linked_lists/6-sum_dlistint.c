#include "lists.h"

/**
 * node_sum_dlistint - node_sums all of the data of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 *
 * Return: node_sum of all data, or 0 if the list is empty
 */
int node_sum_dlistint(dlistint_t *head)
{
	int node_sum = 0;

	while (head != NULL)
	{
		node_sum += head->n;
		head = head->next;
	}
	return (node_sum);
}