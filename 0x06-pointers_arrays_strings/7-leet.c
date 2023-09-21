#include <stdio.h>
#include <string.h>


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

