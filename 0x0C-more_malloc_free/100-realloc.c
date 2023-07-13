#include "main.h"

/**
 * _memcpy - copies a block of memory in src to another block of memory (dest)
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes will be copied
 *
 * Return: pointer to the string copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;
	char *dest_ptr;
	const char *src_ptr;

	dest_ptr = dest;
	src_ptr = src;

	for (i = 0; i < n; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}
	return (dest_ptr);
}

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
	void *ptr2;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		_memcpy(ptr2, ptr, old_size);
		free(ptr);
		return (ptr2);
	}

	if (new_size < old_size)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		_memcpy(ptr2, ptr, new_size);
		free(ptr);
		return (ptr2);
	}
	return (NULL);
}
