#include "main.h"

/**
 * print binary equivalent of a decimal number
 * @n: the decimal number to be printed in binary
 */
int putchar;
void print_binary(unsigned long int n)
{
	int a;
	unsigned long int new;
	int b = 0;

	for (a = 63; a >= 0; a--)
	{
	new = n >> a;
	if (new & 1)
	{
		putchar (1);
			b++;
	}
	else if (b > 0)
	{
	putchar ('0');
	}
	}
	if (b == 0)
	{
	putchar('0');
	}
	putchar('\n');
}

