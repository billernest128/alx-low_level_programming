#include <stddef.h>

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * function copies up to n characters from string pointed to by src to dest.
 * case length of src less than n, remaind dest will be padded with null bytes.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);
}

