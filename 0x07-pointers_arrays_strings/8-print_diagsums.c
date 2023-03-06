#include "main.h"
/**
 * print_diagsums - Entry
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int c, d, e, f = 0, g = 0;

	for (c = 0; c < size; c++)
	{
		e = (c * size) + c;
		f += *(a + e);
	}
	for (d = 0; d < size; d++)
	{
		e = (d * size) + (size - 1 - j);
		g += *(a + e);
	}
	printf("%i, %i\n", f, g);
}
