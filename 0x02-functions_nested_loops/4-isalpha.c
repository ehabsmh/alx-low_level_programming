#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the input to check on
 *
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
	return (1);

	return (0);
}
