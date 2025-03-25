#include <stdio.h>

/**
 * main - Prints all base 10 single digit numbers
 * Return: Always Success (0)
 *
 */

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
