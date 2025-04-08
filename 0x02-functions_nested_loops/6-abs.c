#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer whose absolute value is to be computed.
 * Return: Absolute value on success.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n -= (2 * n));
	}
	else
	{
		return (n);
	}
}
