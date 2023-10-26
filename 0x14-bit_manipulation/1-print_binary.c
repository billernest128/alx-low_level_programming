#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
	if (n)
	{
	print_binary(n >> 1);
	printf("%ld", n & 1);
	}
}
