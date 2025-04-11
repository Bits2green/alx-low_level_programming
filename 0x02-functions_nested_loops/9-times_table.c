#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: the 9 times table on success.
 */

void times_table(void)
{
	int row = 0;
	int col;
	int prod;

	/* Handle rows 0-9 */
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			prod = row * col;

			/* Handle first column without comma */
			if (col == 0)
			{
				if (prod < 10)
					_putchar(prod + '0');
			}
			else
			{
				/* Add comma and space */
				_putchar(',');
				_putchar(' ');

				if (prod < 10)
					_putchar(' ');

				/* Handle larger than 10 numbers */
				if (prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			col++;
		}
		_putchar('$');
		_putchar('\n');
		row++;
	}
}


