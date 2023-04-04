#include "main.h"

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
	if (dest == NULL || src == NULL || n < 0)
		return (NULL);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
