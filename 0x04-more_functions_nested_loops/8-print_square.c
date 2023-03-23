#include "main.h"

/**
 * print_square - prints a square
 * @size: an input for the size of the square
 *
 * Return void
 */

void print_square(int size)
{
	char square = '#';
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(square);
		}
		_putchar('\n');
	}
}
