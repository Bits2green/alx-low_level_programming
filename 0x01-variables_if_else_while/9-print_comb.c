#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: Always Success (0)
 *
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		if (n == 9)
			putchar(' ');
		n++;
	}
	return (0);
}
