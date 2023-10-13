#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum them all
 * @n: the number of parameters passed to the function
 * @..:the variable of parameters to calculate sum of..
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	
	if (n == 0)
        return 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

