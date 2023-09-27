#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to locate
 *
 * Return: pointer > first occurrence of c in s, or NULL if c not found
 */
char *_strchr(char *s, char c)
{
	if (*s == c)

	{
		return (s);
	}
	while (*s++);

	return (NULL);
}	

