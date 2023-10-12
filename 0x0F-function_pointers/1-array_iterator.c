#include "function_pointers.h"

/**
 * Iterates over an array and calls an action function on each element.
 *
 * @param array The array to iterate over.
 * @param size The size of the array.
 * @param action The action function to call on each element of the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}


