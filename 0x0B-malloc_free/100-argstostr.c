#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concats all the args of program
 * @ac: the number of args
 * @av: vector
 *
 * Return: A pointer to the concated string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, pos = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	str = malloc(sizeof(char) * (len + ac + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}

		str[pos] = '\n';
		pos++;
	}

	str[pos] = '\0';
	return (str);
}
