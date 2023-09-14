#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the first node
 * Return: returns the number of elements OTHERWISE 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *trav = h;

	if (!h)
		return (0);

	while (trav)
	{
		len++;
		trav = trav->next;
	}

	return (len);
}
