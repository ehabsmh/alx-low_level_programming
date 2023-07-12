#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}


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
 * _strncpy - copies n character of src to dest
 * @dest: pointer to the dest string
 * @src: pointer to the src string
 * @n: number of characters to be copied
 *
 * Return: pointer to the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len;

	src_len = _strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = src_len; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

/**
 * count_words - counting the words in a string
 * @str: the string that will contain words to count
 *
 * Return: the words count
 */
int count_words(char *str)
{
	int words_count = 0, i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] != ' ') && (str[i + 1] == ' '))
		{
			words_count++;
		}
	}

	if (str[i - 1] != ' ')
	{
		words_count++;
	}

	return (words_count);
}

/**
 * strtow - splits a string into words.
 * @str: the string will be splitted
 *
 * Return: NULL if any of malloc fails or str is NULL or empty
 * OTHERWISE: return double pointer.
 */
char **strtow(char *str)
{
	char **s;

	int i, j = 0, k, words_count, letter_index = 0, word_start;

	if (str == NULL)
		return (NULL);

	if (_strcmp(str, "") == 0)
		return (NULL);

	words_count = count_words(str);

	s = malloc((words_count + 1) * sizeof(char *));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < words_count; i++)
	{
		while (str[j] != '\0')
		{
			if (str[j] != ' ')
			{
				letter_index++;
				if (str[j + 1] == ' ')
				{
					s[i] = malloc((letter_index + 1) * sizeof(char));
				if (s[i] == NULL)
				{
					for (k = 0; k < i; k++)
						free(s[k]);

					free(s);
					return (NULL);
					}
					word_start = j - letter_index + 1;

					_strncpy(s[i], &str[word_start], letter_index);
					s[i][letter_index] = '\0';
					letter_index = 0;
					break;
				}
			}
			j++;
		}
		j++;
	}

	s[words_count] = NULL;
	return (s);
}
