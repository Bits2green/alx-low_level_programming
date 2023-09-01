#include "main.h"

/**
 * get_endianness - Check for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;

	return (*(char *)&num == 1);
}
