#include "function_pointers.h"

/**
 * array_iterator - Entry
 * @array: list of elements
 * @size: size of array
 * @action: function to iterate over the array
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{

		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}
