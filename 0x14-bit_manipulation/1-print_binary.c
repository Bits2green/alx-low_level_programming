#include "main.h"

/* print_binary - Prints binary representation of a number
 * @n: number to be printed
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int c;
	counter = 0;

	unsigned long int num;

	for (c = 63; c >= 0; i--)
	{
		num = n >> c;

		if (num & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
