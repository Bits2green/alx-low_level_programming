#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate h value
 *
 * Return: h value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	h = 5381;
	while ((c = *str++))
	{
		h = ((h << 5) + h) + c; /* h * 33 + c */
	}
	return (h);
}