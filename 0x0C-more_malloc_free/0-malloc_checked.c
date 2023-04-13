#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: Number of bytes
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
