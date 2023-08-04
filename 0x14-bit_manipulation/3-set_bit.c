#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: the number to manipulate
 * @index: Index to replace in the number
 *
 * Return: 1 if it work or -1 if an error occurr
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int aux;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	aux = 1;
	aux = aux << index;
	*n = ((*n) | aux);
	return (1);
}
