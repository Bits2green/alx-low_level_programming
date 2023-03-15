#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entry
 * @c: first member
 *
 * Return: 1 if c is UPPER and 0 if c is lower
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
