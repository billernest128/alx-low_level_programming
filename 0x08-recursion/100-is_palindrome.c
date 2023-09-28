#include <ctype.h>
#include <string.h>


/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	while (start < end)
	{
	if (!isalnum(s[start]))
	start++;
	else if (!isalnum(s[end]))
	end--;
	else if (tolower(s[start++]) != tolower(s[end--]))
	return (0);
	}

	return (1);
}

