#include "main.h"
#include <string.h>

/**
 * _strlen - Entry
 * @s: first member
 *
 * Return: length of first member
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
