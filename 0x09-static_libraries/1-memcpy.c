#include "main.h"

/**
 * _memcpy - Entry
 * @n: first member
 * @src: second member
 * @dest: thirs member
 *
 * Return: a pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		dest[z] = src[z];
		z++;
	}

	return (dest);
}
