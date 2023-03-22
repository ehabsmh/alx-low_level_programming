#include "main.h"

/**
 * _abs - Absolute value of an integer
 * @n: the checked number
 *
 * Return: absolute integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
