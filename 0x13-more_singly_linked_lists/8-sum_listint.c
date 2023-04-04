#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp_num = head;

	while (temp_num)
	{
		add += temp_num->n;
		temp_num = temp_num->next;
	}

	return (add);
}
