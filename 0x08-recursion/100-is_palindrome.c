#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = 0;
	int start = 0;
	int end;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
	length++;
	}

	end = length - 1;

	while (start < end)
	{
	if (s[start] != s[end])
	return (0);

	start++;
	end--;
	}

	return (1);
}

