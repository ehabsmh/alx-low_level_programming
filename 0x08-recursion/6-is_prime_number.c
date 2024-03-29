#include "main.h"

/**
 * prime_check - checks if num is prime
 * @x: int
 * @y: int
 *
 * Return: int
 */

int prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_check(x + 1, y));
}

/**
 * is_prime_number - proving it's a prime num
 * @n : int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
