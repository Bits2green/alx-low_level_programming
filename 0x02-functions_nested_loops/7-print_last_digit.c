#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number whose last digit is to be printed.
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n %= 10;
		_putchar(n + '0');
		return (n);
	}
	else if (n == INT_MAX)
	{
		n = 8;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = -n % 10;
		_putchar(n + '0');
		return (n);
	}
}
