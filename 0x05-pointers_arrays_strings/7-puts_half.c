#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @s: the string to be printed
 */
void puts_half(char *s)
{
    int length = 0;
    int i;

    /* calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* start from the middle of the string */
    i = length / 2; 
    while (s[i] != '\0')
    {
        _putchar(s[i]);
	i++;
    }

    _putchar('\n');
}
