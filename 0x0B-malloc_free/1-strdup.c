#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strLen - Calculates the string's length
 * @str: Pointer to character
 *
 * Return: Length of @str
 */

int _strLen(char *str)
{
	unsigned int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _strdup - copying the string given as a parameter.
 * @str: pointer to the source string
 *
 * Return: Pointer to the copied string
 */

char *_strdup(char *str)
{
	char *copied_str;
	unsigned int i, strLen = 0;

	if (str == NULL)
		return (NULL);

	strLen = _strLen(str);

	copied_str = malloc(sizeof(char) * (strLen + 1));

	if (copied_str == NULL)
		return (NULL);

	for (i = 0; i < strLen; i++)
	{
		copied_str[i] = str[i];
	}

	copied_str[strLen] = '\0';

	return (copied_str);
}
