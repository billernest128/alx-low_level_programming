#include <stdio.h>

/**
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
	diag1 += *(a + i * size + 1);
	diag2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", diag1, diag2);
}

