#include <stdio.h>
#include <string.h>


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

	while (s[i])
	{
		if (strchr(" \t\n,;.!?\"(){}", s[i]))
		new_word = 1;
		else if (new_word && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= ('a' - 'A');
		new_word = 0;
	}

	else
	{
		new_word = 0;
	}

		i++;
	}

	return (s);
}
