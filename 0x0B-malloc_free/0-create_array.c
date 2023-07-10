#include "main.h"

/**
 * create_array - creates an array of characters
 * and inits it with a specific char
 *
 * @size: size of array
 * @c: specific char to init with
 *
 * Return: Null if size is equal to 0 or malloc fails
 *				otherwise return pointer to the allocated space.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
