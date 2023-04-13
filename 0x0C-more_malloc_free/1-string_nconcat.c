#include "main.h"

/**
 * string_nconcat - Allocates memory for two concated strs
 * @s1: pointer to the dest
 * @s2: pointer to the src
 * @n: number of bytes or characters
 *
 * Return: Pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i;
	char *concated_str;

	/*Check Null values*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Calculating the length*/
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/*assigns length of s2 to n*/
	if (n >= s2_len)
		n = s2_len;

	concated_str = malloc(s1_len + n + 1);

	if (concated_str == NULL)
		return (NULL);

	/*Copying s1 to concated_str*/
	for (i = 0; i < s1_len; i++)
		concated_str[i] = s1[i];

	/*Append s2 to concated_str*/
	for (i = 0; i < n; i++)
		concated_str[s1_len + i] = s2[i];

	concated_str[s1_len + i] = '\0';

	return (concated_str);
}
