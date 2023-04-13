#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of blocks
 * @size: Size of blocks
 *
 * Return: Void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_array;
	unsigned int total_size;

	total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated_array = malloc(total_size);

	if (allocated_array == NULL)
		return (NULL);

	/*Set all blocks to 0*/
	memset(allocated_array, 0, total_size);

	return (allocated_array);
}
