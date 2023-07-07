#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: pointer to the string where its byte located in @accept
 * @accept: Pointer to the string where we find its bytes
 *
 * Return: pointer to the located byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *t;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				t = &s[i];
				return (t);
			}
		}
	}
	return (NULL);
}
