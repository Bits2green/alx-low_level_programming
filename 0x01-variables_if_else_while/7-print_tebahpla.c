#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse
 * Return: Always Success (0)
 *
 */

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= 'z')
	{
		putchar(z);
		a++;
		z--;
	}
	putchar('\n');
	return (0);
}

