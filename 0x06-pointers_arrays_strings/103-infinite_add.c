#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer that the function will use to store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result, or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1), j = strlen(n2), k = 0, carry = 0;

	if (i >= size_r || j >= size_r)
	return (0);
	while (i > 0 || j > 0 || carry)
	{
	int sum = carry;

	if (i > 0)
	sum += n1[--i] - '0';
	if (j > 0)
	sum += n2[--j] - '0';
	if (k + 1 >= size_r)
	return (0);
	r[k++] = sum % 10 + '0';
	carry = sum / 10;
	}
	r[k] = '\0';
	for (i = 0; i < --k; i++)
	{
	char temp = r[k];

	r[k] = r[i];
	r[i] = temp;
	}
	return (r);
}

