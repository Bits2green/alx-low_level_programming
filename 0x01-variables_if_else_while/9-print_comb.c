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
		putchar(',');
		putchar(' ');
		n++;
	}
	return (0);
}
