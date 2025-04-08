#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * Return: Minutes of a day in HH:MM
 */

void jack_bauer(void)
{
	int hrs = 0;
	int mins;

	while (hrs < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar('0' + hrs / 10);
			_putchar('0' + hrs % 10);
			_putchar(':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			_putchar('\n');
			mins++;
		}
		hrs++;
	}
}
