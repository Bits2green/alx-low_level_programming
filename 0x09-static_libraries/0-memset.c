#include "main.h"
#include <string.h>

/**
*_memset - Fill memory with a constant byte
* @s: first member
* @b: second member
* @n: third member
*
* Return: a pointer to memory area 's'
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
