#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: finds the first occurrence of the substring needle
 * @needle: string to be found
 *
 * Return: pointer otherwise null
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

		while (needle[j] != '\0' && haystack[i + j] != '\0' &&
			   needle[j] == haystack[i + j])
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
