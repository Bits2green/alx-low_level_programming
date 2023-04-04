#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Entry
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->i);
        h = h->next;
        count++;
    }
    return (count)
}
