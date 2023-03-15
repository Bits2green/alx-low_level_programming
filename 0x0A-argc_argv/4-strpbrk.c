#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry
 * @s:first member
 *
 * @accept: second member
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
