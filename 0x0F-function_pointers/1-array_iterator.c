#include "function_pointers.h"

/** 
 * Check if the array is NULL.
 * Check if the action pointer is NULL.
 * Iterate over the array and call the action function on each element.
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


