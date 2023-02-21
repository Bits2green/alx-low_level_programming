#include "main.h"

/**
 * _islower - Entry
 *
 * Return: 0 if lowercase, and 1 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
