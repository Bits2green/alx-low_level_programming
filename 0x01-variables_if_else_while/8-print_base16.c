#include <stdio.h>

/**
 * main - Prints all the numbers of base16 in lowercase
 * Return: Always Success (0)
 *
 */

int main(void)
{
	int n = 0;

	while (n < 16)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar('a' + (n - 10));
		}
		n++;
	}
	putchar('\n');
	return (0);
}
