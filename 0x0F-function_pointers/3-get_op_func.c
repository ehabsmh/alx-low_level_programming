#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform operation
 * @s: is the operator passed as an argument to the program
 *
 * Return: a pointer to the function
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}};

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
