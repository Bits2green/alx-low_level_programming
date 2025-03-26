#include <stdio.h>

/**
 * main - all possible combinations of two two-digit numbers.
 * Return: Always Success (0)
 *
 */

int main(void)
{
	int n = 0;
	int m;

	while (n < 99)
	{
		m = n + 1;
		while (m < 100)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (!(n == 98 && m == 99))
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
