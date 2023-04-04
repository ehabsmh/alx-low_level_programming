#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: is a pointer that points to the block of memory that needs to be filled
 * @b: is the byte we use
 * @n: number of bytes to fill
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
