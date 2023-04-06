#include "main.h"

/**
 * _pow_recursion - returns a value raised to the power of other value
 * @x: the value will power
 * @y: the value will be powered of
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y != 0)
	return (x * _pow_recursion(x, y - 1));

	return (1);
}
