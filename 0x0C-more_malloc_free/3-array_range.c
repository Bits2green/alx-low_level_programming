#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry
 * @min: first member
 * @max: second member
 *
 * Return: pointer to the new array.
 */
 
int *array_range(int min, int max)
{
	int *p;
	int j, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		p[j] = min++;

	return (p);
}
