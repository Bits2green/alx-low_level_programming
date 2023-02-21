#include "main.h"

/**
 * print_alphabet_x10 - Entry
 *
 */

void print_alphabet_x10(void)
{
	int c;
	char lt;

	c = 1;
	while(c < 10)
	{
		for (lt = 'a'; lt <= 'z'; lt++)
			_putchar(lt);
		_putchar('\n');
	}
}

