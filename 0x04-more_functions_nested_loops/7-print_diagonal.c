#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: is the number of times the char \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	char diagonal = '\\';
	char space = ' ';
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(space);
		}
		_putchar(diagonal);
		_putchar('\n');
	}
}
