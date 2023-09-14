#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the first node
 * Return: the number of nodes, OTHERWISE 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *trav = h;

	if (!h)
		return (0);

	while (trav)
	{
		len++;
		printf("%d\n", trav->n);
		trav = trav->next;
	}

	return (len);
}
