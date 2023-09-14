#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to the head pointer (First node).
 * @idx: The given position
 * @n: The data to be stored at the node.
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *nth_node = NULL;

	if (!new || !*h)
		return (NULL);

	/* If index == 0: add node at beginning */
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	nth_node = get_dnodeint_at_index(*h, idx);
	if (!nth_node)
		return (NULL);

	if (!nth_node->next)
		return (add_dnodeint_end(h, n));

	new->next = nth_node;
	new->n = n;
	new->prev = nth_node->prev;
	nth_node->prev->next = new;
	nth_node->prev = new;

	return (new);
}

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
