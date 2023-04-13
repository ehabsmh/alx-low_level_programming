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
	int *allocated_array, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	allocated_array = malloc(size * sizeof(int));

	if (allocated_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		allocated_array[i] = min + i;

	return (allocated_array);
}
