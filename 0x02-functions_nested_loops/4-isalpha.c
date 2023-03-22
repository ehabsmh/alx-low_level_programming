#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the input to check on
 *
 * Return: 1 if c is a letter and Return: 0 otherwise
 */
int _isalpha(int c)
{
	int i = 0;

	while (i < 128)
	{
	if ((c >= 65) && (c <= 90) || (c >= 97) && (c <= 122))
	{
	return (1);
	}
	return (0);
	i++;
	}
}
