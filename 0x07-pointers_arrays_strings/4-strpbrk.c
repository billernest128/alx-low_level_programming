#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string to search.
 * @accept: The characters to search for.
 *
 * Return: pointer to byte in @s that matches one of the bytes in @accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s && !strchr(accept, *s))
	s++;

	return (*s ? s : NULL);
}

