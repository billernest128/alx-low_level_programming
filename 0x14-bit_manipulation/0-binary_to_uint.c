#include "main.h"
#include <stdio.h>

/**
 * binary can be converted through unsigned int
 * @bit: a string that takes a binary number
 * return: numbers that are converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);
	while(*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		(num = num *2 + (b++ - '0');
	}
	return (num);
}

