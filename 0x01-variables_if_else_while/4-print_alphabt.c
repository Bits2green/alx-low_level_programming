#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except 'q' and 'e'
 * Return: Always success (0)
 *
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
		if (a == 'q' || a == 'e')
			a++;
	}
	putchar('\n');
	return (0);
}
