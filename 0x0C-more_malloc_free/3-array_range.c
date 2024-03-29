#include "main.h"

/**
 * array_range - creates an array of integer
 * Allocates memory as long as min greater than max
 *
 * @min: The Smallest value
 * @max: The biggest value
 *
 * Return: Pointer to an integer
 */

int *array_range(int min, int max)
{
	int i, *ptr, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
