#include <stdio.h>
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
	{
 	fprintf(stderr, "Index out of range.\n");
	return (-1);
	}

	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
