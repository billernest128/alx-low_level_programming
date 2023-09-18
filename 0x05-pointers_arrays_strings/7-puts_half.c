#include "main.h"
/**
 *puts_half - puts half of a string
 *@str: string
 *Return: void
 */

int _str(char *s)
{
	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
