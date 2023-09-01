#include <stdio.h>

/*
 * binary_to_uint - converts binary numbers to decimal number
 * @*b: pointer to a string of 0s and 1s
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c_bin = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		c_bin <<= 1;
		c_bin |= (b[i] - '0');
	}

	return (c_bin);
}
