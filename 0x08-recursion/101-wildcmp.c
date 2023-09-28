#include <string.h>

/**
 * wildcmp - Compares two strings with wildcard character *.
 * @s1: The first string.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if strings are identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
    /* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	return 1;

	if (*s2 == '*')
	{

	while (*(s2 + 1) == '*')
	s2++;
	while (*s1 != '\0')
	{
	if (wildcmp(s1, s2 + 1))
	return (1);
	s1++;
	}

        return (wildcmp(s1, s2 + 1));
	}


	if (*s1 == *s2 || *s2 == '?')
	return (wildcmp(s1 + 1, s2 + 1));

    return (0);
}

