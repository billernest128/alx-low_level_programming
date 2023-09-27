#include <string.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack && strncmp(haystack, needle, strlen(needle)) != 0)
	haystack++;

	return (*haystack ? haystack : NULL);
}

