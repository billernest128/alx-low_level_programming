/**
 * _sqrt_recursive_helper - helper function for square root calculation.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursive_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	return ((guess * guess > n) ? -1 : _sqrt_recursive_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	return ((n < 0) ? -1 : _sqrt_recursive_helper(n, 1));
}

