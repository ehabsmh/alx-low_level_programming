#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *		   using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 If value is not present in array or if array is NULL
 *	   Otherwise: return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid;

	if (!array)
		return (-1);

	print_array(array, start, end);

	while (start <= end)
	{
		mid = (start + end) / 2;
		
		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
		{
			end = mid - 1;
			print_array(array, start, end);
		}
		else
		{
			start = mid + 1;
			print_array(array, start, end);
		}
	}

	return (-1);
}

/**
 * print_array - prints array
 * @array: the array to print
 * @start: the first index
 * @end: the last index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	if (!array)
		return;
	if (start <= end)
	{
		printf("Searching in array: ");
		
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);

			if (i < end)
				printf(", ");
			else
				printf("\n");
		}
	}
}
