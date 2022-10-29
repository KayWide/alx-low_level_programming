#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter on each element of array.
 * @array: array of integers
 * @size: size of array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
