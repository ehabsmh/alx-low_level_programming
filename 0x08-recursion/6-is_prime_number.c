#include "main.h"

/**
 * primeCheck - checks if num is prime
 * @a: int
 * @b: int
 *
 * Return: int
 */

int primeCheck(int a, int b)
{
	if (a % b == 0 || b < 2)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}

	return (check(a + 1, b));
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
