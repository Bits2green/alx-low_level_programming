#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num;

	if (head == NULL)
		return (NULL);
	num = malloc(sizeof(listint_t));
	if (num == NULL)
		return (NULL);
	num->n = n;
	num->next = *head;
	*head = num;
	return (num);
}
