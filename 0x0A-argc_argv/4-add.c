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
	int i, sum = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr != '\0')
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
