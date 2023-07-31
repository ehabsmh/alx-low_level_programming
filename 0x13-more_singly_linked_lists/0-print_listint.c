#include "lists.h"

/**
 * print_listint - Prints all the elements of a list
 * @h: Pointer to the head of list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_nodes;
	const listint_t *traversal;

	if (!h)
		return (0);

	traversal = h;
	number_nodes = 0;

	while (traversal)
	{
		printf("%d\n", traversal->n);
		traversal = traversal->next;
		number_nodes++;
	}

	return (number_nodes);
}
