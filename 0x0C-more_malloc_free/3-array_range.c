#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value to start the array.
 * @max: The maximum value to end the array.
 *
 * Return: pointer to newly created array, or NULL on failure or invalid input.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	arr[i] = min + i;
	}

	return (arr);
}

