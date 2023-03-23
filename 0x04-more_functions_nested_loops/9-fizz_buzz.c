#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints the numbers from 1 to 100
 *
 * for multiples of three print Fizz
 *
 * for the multiples of five print Buzz
 *
 * for multiples of both three and five print FizzBuzz.
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
