#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always success (0)
 */

void print_alphabet_x10(void)
{
	int i = 10;
	char a;

	while (i--)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
