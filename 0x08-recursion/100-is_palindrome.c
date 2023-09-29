#include <stdio.h>
#include <math.h>

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return 0;

	if (n <= 3)
	return (1);

	if (n % 2 == 0 || n % 3 == 0)
	return (0);

	int max_divisor = sqrt(n) + 1;
	for (int i = 5; i < max_divisor && (n % i != 0 && n % (i + 2) != 0); i += 6)
	continue;

	return (i >= max_divisor);
}

/**
 * main - Test cases for is_prime_number function.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	printf("Case: is_prime_number(1) - Result: %d\n", is_prime_number(1));
	printf("Case: is_prime_number(103) - Result: %d\n", is_prime_number(103));
	printf("Case: is_prime_number(-7) - Result: %d\n", is_prime_number(-7));
	printf("Case: is_prime_number(104729) - Result: %d\n", is_prime_number(104729));

	return (0);
}

