#include "main.h"

/**
 * string_toupper - Entry
 * @s:first member
 *
 * Return: a char
 */
char *string_toupper(char *s)
{

	int z;

	z = 0;
	while (*(s + z))
	{
		if (*(s + z) >= 'a' && *(s + z) <= 'z')
			*(s + z) -= 'a' - 'A';
		z++;
	}
	return (s);
}
