#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * This function appends the src string to the dest string,
 * overwriting the null byte ('\0') at the end of dest,
 * and then it adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
	*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}

