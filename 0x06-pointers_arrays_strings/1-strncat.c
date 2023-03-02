#include "main.h"

/**
 * _strncat - Entry
 * @dest: firt member
 * @src: second member
 * @n: third member
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int w, v;

	for (w = 0; dest[w] != '\0'; w++)
	{
		continue;
	}

	for (v = 0; src[v] != '\0' && v < n; v++)
	{
		dest[w + v] = src[v];
	}
	dest[w + v] = '\0';
	return (dest);
}

