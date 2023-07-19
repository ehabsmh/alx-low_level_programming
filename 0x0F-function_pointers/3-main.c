#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *arth_op;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	arth_op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(arth_op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*arth_op == '/' && n2 == 0) || (*arth_op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(arth_op);
	printf("%d\n", (*ptr)(n1, n2));
	return (0);
}
