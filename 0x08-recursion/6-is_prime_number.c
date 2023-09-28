#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	return (0);

	for (int i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	return (0);
	}

	return (1);
}

