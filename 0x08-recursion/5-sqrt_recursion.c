#include "main.h"

/**
 * check - checks for the square root
 * @a: int
 * @b: int
 *
 * Return: int
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (b < a * a)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the square root of number
 * @n: root number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
