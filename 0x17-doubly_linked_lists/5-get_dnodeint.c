#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: First node
 * @index: The index of a node
 * Return: the nth node of the linked list OTHERWISE NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traverse = head;

	while (index)
	{
		if (traverse == NULL)
			return (NULL);
		traverse = traverse->next;
		index--;
	}

	return (traverse);
}
