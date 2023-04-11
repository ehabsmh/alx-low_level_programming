#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 *
 * Return: 0 if program works and 1 if program doesn't
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
