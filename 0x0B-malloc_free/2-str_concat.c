#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;
	unsigned int i, j;

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	concatenated[i] = s1[i];

	for (j = 0; j < len2; j++)
	concatenated[len1 + j] = s2[j];

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}

