#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
		(*ptr++ = *src++);

	*ptr = '\0';

	return (dest);
}
