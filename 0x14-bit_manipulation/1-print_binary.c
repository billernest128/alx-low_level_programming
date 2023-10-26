#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n, int bit_n)
{
    for (int i = bit_n - 1; i >= 0; i--)
    {
        int bit = n >> i;
        if (bit & 1)
        {
            putchar(1);
        }
        else
        {
            putchar(0);
        }
    }
}

int main()
{
    print_binary(10);
    return 0;
}
