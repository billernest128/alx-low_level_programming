#include <stdio.h>
#include <string.h>

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Letters a and A are replaced by 4,
 * Letters e and E are replaced by 3,
 * Letters o and O are replaced by 0,
 * Letters t and T are replaced by 7,
 * Letters l and L are replaced by 1.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	char *p = strchr("aAeEoOtTlL", s[i]);

	if (p)
	s[i] = "4433007711"[p - "aAeEoOtTlL"];
	}

	return (s);
}

