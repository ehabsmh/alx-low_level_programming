#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet in lowerCase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
		i++;
		_putchar('\n');
	}
}
