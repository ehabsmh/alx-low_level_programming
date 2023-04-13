#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in butes for the new memory block.
 *
 * Return: ptr -> If new_size equal to old_size
 *	NULL -> if new_size equal to 0 and ptr not NULL
 *	Pointer to the reallocated memory block otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *allocated_memory;
	char *ptr_cpy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		allocated_memory = malloc(new_size);

		if (allocated_memory == NULL)
			return (NULL);

		return (allocated_memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;
	allocated_memory = malloc(sizeof(*ptr_cpy) * new_size);

	if (allocated_memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = allocated_memory;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_cpy++;

	free(ptr);
	return (allocated_memory);
}
