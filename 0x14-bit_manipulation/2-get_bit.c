#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number from which the bit is extracted
 * @index: the index of the bit to get. For the least sf bit, the index is 0
 *
 * Return: the value of the bit at the specified index. (0 or 1), or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitMask;

	/* Check if the 'index' is within valid range for datatype */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Index if out of valid range */
	}

	/* Create a mask with 1 at the desired index using << */
	bitMask = 1UL << index;

	/*  if both corresponding bits in the operands are 1*/
	if (n & bitMask)
	{
		return (1); /* Bit at index is 1 */
	}
	else
	{
		return (0); /* Bit at index is 0 */
	}
}



