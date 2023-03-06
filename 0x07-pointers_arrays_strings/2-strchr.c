#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry
 * @s: first member
 * @c: second member
 *
 * Return: a pointer to 'dest'
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);
	return (NULL);
}
