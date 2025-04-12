#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number passed to the function
 * Return: natural numbers on sucess
 */

void print_to_98(int n)
{
	int current = n, is_negative = 0;

	while (1)
	{
		if (current < 0)
		{
			_putchar('-');
			is_negative = 1;
			current = -current; /* Make number positive for printing */}

		if (current >= 100)
		{
			_putchar((current / 100) + '0');
			_putchar(((current / 10) % 10) + '0');
			_putchar((current % 10) + '0'); }
		else if (current >= 10)
		{
			_putchar((current / 10) + '0');
			_putchar((current % 10) + '0'); }
		else
		{
			_putchar(current + '0'); }

		if (is_negative)
		{
			current = -current;
			is_negative = 0; }

		if (current == 98)
		{
			_putchar('\n');
			break; }

		_putchar(',');
		_putchar(' ');
		if (n < 98)
			current++;
		else
			current--;
	}
}


