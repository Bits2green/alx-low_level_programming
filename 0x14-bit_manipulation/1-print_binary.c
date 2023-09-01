#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: number to be printed
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* rightshift and print the higher order bits */
		print_binary(n >> 1);
	}

	/* print the current bit */
	putchar((n & 1) ? '1' : '0');
}

