#include "main.h"

// Include the declaration of check_valid_string before its usage
int check_valid_string(const char *b);

unsigned int binary_to_uint(const char *b)
{
    unsigned int decimal = 0;
    int str_len = 0, base = 1;

    if (!check_valid_string(b))
        return (0);

    while (b[str_len] != '\0')
        str_len++;

    while (str_len)
    {
        decimal += ((b[str_len - 1] - '0') * base);
        base *= 2;
        str_len--;
    }
    return (decimal);
}

int check_valid_string(const char *b)
{
    if (b == NULL)
        return (0);

    while (*b)
    {
        if (*b != '1' && *b != '0')
            return (0);
        b++;
    }
    return (1);
}

int main()
{
    // ... Your main code ...
    return 0;
}
