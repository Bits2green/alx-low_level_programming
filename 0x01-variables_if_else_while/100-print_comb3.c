#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always Success (0)
 *
 */

int main(void)
{
	int n = 0;
	int m;

	while (n < 9)
	{
		m = n + 1;
		while (m < 10)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (!(n == 8 && m == 9))
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
