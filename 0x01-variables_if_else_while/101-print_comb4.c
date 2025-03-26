#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always Success (0)
 *
 */

int main(void)
{
	int n = 0;
	int m;
	int o;

	while (n < 8)
	{
		m = n + 1;
		while (m < 9)
		{
			o = m + 1;
			while (o < 10)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
				if (!((n == 7 && m == 8) && o == 9))
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
