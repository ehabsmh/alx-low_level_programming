#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the ascii value to be checked
 *
 * Return: 1 if c is lowerCase, and 0 for upperCase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	return (0);
}

