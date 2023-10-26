#include "main.h"
#include <stdio.h>

/**
 * set the value of a bit to 1 at a given index.
 * @n: a pointer to the unsigned long int to modify
 * @index: the index of the bit to set (starting from 0)
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index) {
    if (index >= 64) {
        // Index is out of range, return -1 to indicate an error
        return -1;
    }

    unsigned long int mask = 1UL << index;  // Create a mask with a 1 at the specified index
    *n = *n | mask;  // Use bitwise OR to set the bit to 1

    return 1;
}

int main() {
    unsigned long int num = 42;  // Replace with your number
    unsigned int bitIndex = 3;  // Replace with the index you want to set

    int result = set_bit(&num, bitIndex);

    if (result == 1) {
        printf("Bit at index %u is set to 1. New value: %lu\n", bitIndex, num);
    } else {
        printf("Error: Index out of range\n");
    }

    return 0;
}

