#include "main.h"

/**
 * _puts - Entry
 * @str: first member
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
