#include "main.h"

/**
 * set_bit - the given index sets a bit 1
 * @n: its nothing but a pointer
 * @index: an index that set a bit
 * return: 1 success, -1 fail
 */
int set_bit (unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index)) 1 *n);
		return (1);
}
