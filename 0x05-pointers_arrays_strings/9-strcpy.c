#include "main.h"

/**
 * char 8_stypy - function that copies the string pointed to by src
 *@dest: destination
 *@src: source
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
