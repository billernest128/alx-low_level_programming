#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to change
 *
 * This function capitalizes all words of a string.
 * Words are separated by following characters: space, tabulation, new line
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;

	while (s[i] != '\0')
	{
	/* Check if character is a separator */
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
	new_word = 1;
	}
	/* If character is lowercase letter and starts new word, convert uppercase */
	else if (new_word && s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] -= ('a' - 'A');
	new_word = 0;
	}
	/* If character is not a separator nor starts a new word, just continue */
	else
	{
	new_word = 0;
	}

	i++;
	}

	return (s);
}
