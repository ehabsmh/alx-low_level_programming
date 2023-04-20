#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two nums
 * @a: First num
 * @b: Second num
 *
 * Return: THE SUM OF A AND B
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the sub of two nums
 * @a: First num
 * @b: Second num
 *
 * Return: THE sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the mul of two nums
 * @a: First num
 * @b: Second num
 *
 * Return: THE mul of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the div of two nums
 * @a: First num
 * @b: Second num
 *
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of two nums
 * @a: First num
 * @b: Second num
 *
 * Return: THE remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
