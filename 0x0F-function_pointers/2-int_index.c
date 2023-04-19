#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: Function pointer
 *
 * Return: 0 if array or cmp is NULL
 *	and the index of the element if elem > 0
 *	OTHERWISE -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
