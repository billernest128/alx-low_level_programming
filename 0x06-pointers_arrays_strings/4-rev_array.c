#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to reverse
 * @n: The number of elements in the array
 *
 * This function reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}

