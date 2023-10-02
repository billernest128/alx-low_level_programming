#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicate string, or NULL if
 *         memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int length = 0;
    unsigned int i;

    if (str == NULL)
        return NULL;

    while (str[length] != '\0')
        length++;

    duplicate = (char *)malloc((length + 1) * sizeof(char));

    if (duplicate == NULL)
        return NULL;

    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return duplicate;
}

