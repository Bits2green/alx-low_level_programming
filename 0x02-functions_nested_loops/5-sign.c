#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number for which the sign is to be printed.
 * Return: 1 if n > 0, 0 is n == 0, and -1 if n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

