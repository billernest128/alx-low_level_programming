#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * function compares two strings s1 and s2. It returns an integer less than,
 * equal to, or > zero if s1 is found, respectively, to be less than,
 * to match, or be greater than s2.
 *
 * Return: The difference in bytes in strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
