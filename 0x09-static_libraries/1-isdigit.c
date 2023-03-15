#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry
 * @c: First member
 *
 * Return: 1 if is digit, and 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
