#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: number to be printed
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int c;

	tally = 0;

	unsigned int num;

	for (c = 63; c >= 0; c--)
	{
		num = n >> c;

		if (num & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
			_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
