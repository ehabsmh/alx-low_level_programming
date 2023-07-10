#include "main.h"

/**
 * argstostr - concatenates all the args of the program
 * @ac: Number of arguments
 * @av: Array of strings
 *
 * Return: NULL if ac is 0 or av is null
 * OTHERWISE return pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, str_len = 0, str_index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str_len++;
		}
		str_len++;
	}

	printf("%d\n", str_len);

	str = malloc(sizeof(char) * (str_len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, str_index++)
		{
			str[str_index] = av[i][j];
		}
		str[str_index] = '\n';
		str_index++;
	}

	str[str_len] = '\0';

	return (str);
}
