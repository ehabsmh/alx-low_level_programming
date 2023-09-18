#include "main.h"

/**
 * _strstr - find substring in initial string
 * @haystack: initial string to be searched
 * @needle: substring to be found
 *
 * Return: substring if found, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i + j] != '\0'
		&& needle[j] == haystack[i + j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
