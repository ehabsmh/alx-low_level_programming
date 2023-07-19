#include "function_pointers.h"

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	op_codes(number_of_bytes);

	return (0);
}

/**
 * op_codes - printing the opcode of main function
 * @bytes: number of bytes to be printed
 *
 * Return: void
 */
void op_codes(int bytes)
{
	int (*main_ptr)(int, char **);
	int i;

	main_ptr = main;

	for (i = 0; i < bytes; i += 2)
	{
		/* Print opcodes with hexadecimal */
		printf("%02x ", *((unsigned char *)(main_ptr + i)));
	}
	printf("\n");
}
