#include "main.h"
#include <stdio.h>

/**
 * binary can be converted through unsigned int
 * @bit: a string that takes a binary number
 * return: numbers that are converted
 */
unsigned int binary_to_uint(const char * b)
{
	int alx;
	unsigned int i = 0;

	if (!b)
		return (0);
	for(alx = 0; b[alx]; alx++)
	{
		if (b[alx] < '0' || b[alx] > '1')
			return (0);
		(i = 2 * i + (b[alx]));
	}
	return (i);
}

