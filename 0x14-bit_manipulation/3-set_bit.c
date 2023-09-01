#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: value of the bit
 * @index: the index at which the value of the bit is set
 *
 * Return: 1 if it worked, -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bitMask = 1UL << index;/*create mask with a 1 at desired index*/

	*n |= bitMask; /* set the bit at index to 1 using '|' (OR)*/

	return (1); /*success*/
}
