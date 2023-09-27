#include <main.h>


/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
	{
	char *ptr = s;
	/* Save original pointer for return value*/
	/* Fill memory area pointed by s with constant byte b*/

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);  /* Return the original pointer*/
}

