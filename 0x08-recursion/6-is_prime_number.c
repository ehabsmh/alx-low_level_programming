#include "main.h"

/**
 * primeCheck - checks if num is prime
 * @a: int
 * @b: int
 *
 * Return: int
 */

int primeCheck(int x, int y)
{
	if (x % y == 0 || y < 2)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}

	return (check(x + 1, y));
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
	return (primeCheck(2, n));
}
