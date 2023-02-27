#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int j, m;

	m = 0;
	while (s[m] != '\0')
		m++;

	for (j = m - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

