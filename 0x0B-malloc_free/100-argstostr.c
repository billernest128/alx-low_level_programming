#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 *         separated by newlines, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k;
	int total_len = 0;
	int newline_count = ac - 1;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	j = 0;
	while (av[i][j] != '\0')
	{
		total_len++;
		j++;
	}
	}

	concatenated = (char *)malloc((total_len + newline_count + 1) * sizeof(char));

	if (concatenated == NULL)
	return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		concatenated[k] = av[i][j];
		k++;
	}
	if (i < ac - 1)
	{
		concatenated[k] = '\n';
		k++;
	}
		}

	concatenated[k] = '\0';

	return (0);
}


