#include "main.h"

/**
 * _strcat - Entry
 * @dest: first member
 * @src: second member
 *
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *j = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
