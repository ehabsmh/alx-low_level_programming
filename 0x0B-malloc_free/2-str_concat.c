#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strLen - calculate length of string
 * @str: Pointer to a string
 *
 * Return: The length
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
 * _concat - concatenate s1 and s2
 * @s1: Destination
 * @s2: Source
 *
 * Return: Destination
 */
char *_concat(char *s1, char *s2)
{
	unsigned int i, s1_len = 0, s2_len = 0;
	char *result;

	s1_len = _strLen(s1);
	s2_len = _strLen(s2);

	result = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++)
	{
		result[s1_len + i] = s2[i];
	}

	result[s1_len + s2_len] = '\0';

	return (result);
}

/**
 * str_concat - concatenate two strings pointed to newely string
 * @s1: Dest
 * @s2: Src
 *
 * Return: newely pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *concated_str;
	unsigned int i, s1_len = 0;

	s1 = _concat(s1, s2);

	s1_len = _strLen(s1);

	concated_str = malloc(sizeof(char) * (s1_len + 1));

	if (concated_str == NULL)
		return (NULL);

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (i = 0; i <= s1_len; i++)
	{
		concated_str[i] = s1[i];
	}

	return (concated_str);
}
