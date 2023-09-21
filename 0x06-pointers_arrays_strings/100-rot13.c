#include <stdio.h>
#include <string.h>

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to encode
 *
 * This function encodes a string using rot13.
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{

	int i;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
	char *p = strchr(letters, s[i]);

	if (p)
	s[i] = rot13[p - letters];
	}

	return (s);
}

