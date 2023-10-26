#include "main.h"
#include <stdio.h>
#include <limits.h>

// Function to set the value of a bit to 1 at a given index
int set_bit(unsigned long int *n, unsigned int index)
{
    // Check if the index is out of range
    if (index >= CHAR_BIT * sizeof(*n))
    {
        fprintf(stderr, "Index out of range.\n");
        return -1;
    }

    // Set the bit value at the index position to 1
    *n |= (1UL << index);

    return (1);
}

int main()
{
    unsigned long int n = 0b10101;
    unsigned int index = 1;

    // Set the bit value at the index position to 1
    if (set_bit(&n, index) != -1)
    {
        printf("The updated value of n is %lu.\n", n);
    }

    return (0);
}
