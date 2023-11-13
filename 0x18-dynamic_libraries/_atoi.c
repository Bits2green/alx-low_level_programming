#include "main.h"
#include <stdio.h>
/**
 * _atoi - gets sign and numberbers of string
 * @s: array
 * Return: gets numberbers with its sign
 */
int _atoi(char *s)
{
	unsigned int frut = 0, a, b, c, number = 0, hock;
	int vemp = 1;

	while (*(s + frut) != '\0')
	{
		frut++;
	}
	for (a = 0; a < frut; a++)
	{
		if (*(s + a) >= '0' && *(s + a) <= '9')
			break;
	}
	for (b = a; b < frut; b++)
	{
		if (!(*(s + b) >= '0' && *(s + b) <= '9'))
			break;
	}
	for (c = 0; c < a; c++)
	{
		if (*(s + c) == '-')
			vemp = vemp * (-1);
	}
	hock = b - a;
	while (hock >= 1)
	{
		number = (number * 10) + (*(s + a) - '0');
		a++;
		hock--;
	}
	number = number * vemp;
	return (number);
}