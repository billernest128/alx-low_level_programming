#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int divisor;

	if (n <= 1)
	{
	/* 0 and 1 are not prime */
	return (0);
	}

	if (n <= 3)
	{
	/* 2 and 3 are prime */
	return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
	/* Divisible by 2 or 3, not prime */
	return (0);
	}

	divisor = 5;
	while (divisor * divisor <= n)
	{
	if (n % divisor == 0 || n % (divisor + 2) == 0)
	{
	/* Divisible by divisor or divisor + 2, not prime */
	return (0);
	}
	divisor += 6;
	}

	/* o divisors found, n is prime */
	return (1);
}

