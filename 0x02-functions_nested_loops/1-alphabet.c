#include "main.h"

/**
 * print_alphabet - prints alphabets in lowerCase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}

