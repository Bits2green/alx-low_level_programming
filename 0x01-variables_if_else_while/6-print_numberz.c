#include <stdio.h>

/**
 * main - Prints all base 10 single digit numbers
 * Return: Always Success (0)
 *
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
