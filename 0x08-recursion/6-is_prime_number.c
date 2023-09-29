#include <stdio.h>
#include <math.h>

int is_prime_recursive(int n, int divisor)
{
    if (n <= 1)
        return 0;
    if (n <= 3 || (n % 2 != 0 && n % 3 != 0 && divisor * divisor > n))
        return 1;
    if (n % 2 == 0 || n % 3 == 0 || n % divisor == 0 || n % (divisor + 2) == 0)
        return 0;

    return is_prime_recursive(n, divisor + 6);
}

int is_prime_number(int n)
{
    return is_prime_recursive(n, 5);
}

