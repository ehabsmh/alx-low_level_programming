#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 *
 * Return: 0 if program correct 1 if not
 */
int main(int argc, char *argv[])
{
	int sum = 0, num = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *str = argv[i];

		while (*str != '\0')
		{
		if (!isdigit(*str))
		{
			printf("Error\n");
			return (1);
		}
		str++;
		}

		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
