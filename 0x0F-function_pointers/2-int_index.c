#include "function_pointers.h"

/**
 * int_index - Entry
 * @array: list of elements
 * @size: size of array
 * @cmp: function toiterate over the array
 *
 * Return: index of first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if ((*cmp)(array[i]) == 0)
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
