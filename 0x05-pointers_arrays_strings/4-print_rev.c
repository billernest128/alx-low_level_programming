#include "main.h"
/**
 * print_rev -prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int longi = 0;

	int i;
		
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (i = longi; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
