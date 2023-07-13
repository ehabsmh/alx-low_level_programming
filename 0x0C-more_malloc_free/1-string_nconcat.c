#include "main.h"

/**
 * _strlen - Evaluates the length of a string
 * @s: array of strings (decayed into a pointer when passed as an argument)
 *
 * Return: the length of the string
 */

int _strlen(char *s) /* char *s = str; */
{
	unsigned int str_len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		str_len++;
	}

	return (str_len);
}

/**
 * _strcpy - copies the string pointed to by src to the buffer
 * pointed to by dest
 * @dest: Pointer to the buffer
 * @src: pointer to string
 *
 * Return: pointer to the string which copied
 */

char *_strcpy(char *dest, char *src)
{
	char *str;

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	str = dest;

	return (str);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: destination string
 * @s2: source string will be appended to s1
 * @n: number of the appended bytes in s2.
 *
 * Return: NULL if malloc fails
 * OTHERWISE, return pointer to the newely allocated space
 * in heap
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	str = malloc((s1_len + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	_strcpy(str, s1);

	for (i = 0; i < n; i++)
		str[s1_len + i] = s2[i];

	str[s1_len + i] = '\0';

	return (str);
}
