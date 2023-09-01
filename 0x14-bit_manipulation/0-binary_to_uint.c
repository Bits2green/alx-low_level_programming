#include "main.h"

/**
 * binary_to_uint - converts binary numbers to decimal number
 * @b: pointer to a string of 0s and 1s
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int c_bin = 0;

	if (b == NULL)
		return (0);


	/* iterate through the chars in the string */
	for ( ; b[i] != '\0'; i++)
	{

		/* check if the char is not '0' or '1' */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0); /* invalid binary string */
		}

		/* shift the result to the left by 1 and add the new bit */
		c_bin <<= 1;
		c_bin |= (b[i] - '0'); /* now convert the chas to int */
	}

	return (c_bin);
}

