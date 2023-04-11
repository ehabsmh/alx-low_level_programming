#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	argv -= '0';
	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
