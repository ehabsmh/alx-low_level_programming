#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Array of characters
 * @f: Function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
