#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

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
	size_t len1 = 0;
	size_t len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concated_str = malloc(len1 + len2 + 1);

	if (concated_str == NULL)
		return (NULL);


	memcpy(concated_str, s1, len1);
	memcpy(concated_str + len1, s2, len2 + 1);

	return (concated_str);
}
