#include "main.h"

/**
 * get_bit - Returns a value of a given index
 * @n: the number
 * @index: the index of the bit we want
 *
 * Return: value at given index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
