#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: pointer to the buffer filled with the constant byte
 * @b: the constant byte that will be filled with
 * @n: number of the constant byte
 *
 * Return: pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of datatype
 *
 * Return: NULL if malloc fails, nmemb is 0 or size is 0
 * OTHERWISE Return pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(nmemb * size);

	if (calloc == NULL)
		return (NULL);

	_memset(calloc, 0, nmemb);

	return (calloc);
}
