#include "main.h"

/**
 * flip_bits - flip bits to get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* perfom a XOR to find differing bits */
	unsigned long int xorR = n ^ m;
	unsigned int tally = 0;

	while (xorR)
	{
		/* Check the least sig. bit */
		tally += xorR & 1;

		/* Rightshift to check the bit */
		xorR >>= 1;
	}

	return (tally);
}
