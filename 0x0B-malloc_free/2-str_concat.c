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
 * _memcpy - copies memory area.
 * @dest: destination where copied at
 * @src: the copy will take from
 * @n: number of bytes
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * str_concat - allocates newely space for two concatenated strings
 * @s1: The destination string to be concatenated by s2
 * @s2: The source string that concatenated to s2
 *
 * Return: NULL if malloc failed OTHERWISE,
 * Return pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len;
	char *str;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc((sizeof(char) * s1_len + 1 + s2_len + 1));

	if (str == NULL)
		return (NULL);

	_memcpy(str, s1, s1_len + 1);
	_memcpy(str + s1_len, s2, s2_len + 1);

	return (str);
}
