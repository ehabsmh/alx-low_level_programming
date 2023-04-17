#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to string to be searched
 * @accept: Pointer to string used for searching
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[i])
			{
				len++;
				break;
			}
		}

		if (accept[j] == '\0')
			break;
	}

	return (len);
}
