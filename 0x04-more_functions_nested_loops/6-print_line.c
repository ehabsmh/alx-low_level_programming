#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: an input for how many _ will be printed
 *
 * Return: void
 */
void print_line(int n)
{
	char under_score = '_';
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(under_score);
	}
	_putchar('\n');
}
