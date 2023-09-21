#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: The string to change
 *
 * This function changes all lowercase letters of a string to uppercase.
 *
 * Return: A pointer to the changed string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}
	i++;
	}

	return (s);
}

