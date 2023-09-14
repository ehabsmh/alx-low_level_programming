#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer to the head pointer (First node)
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nth_node = NULL;

	if (!*head)
		return (-1);

	nth_node = get_dnodeint_at_index(*head, index);

	if (!nth_node)
		return (-1);

	if (index == 0)
	{
		if (nth_node->next)
			nth_node->next->prev = NULL;

		free(*head);
		*head = nth_node->next;
		return (1);
	}

	if (nth_node->next)
		nth_node->next->prev = nth_node->prev;
	if (nth_node->prev)
		nth_node->prev->next = nth_node->next;
	free(nth_node);

	return (1);
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

	if (index == 0)
		return (head);

	while (index != 1)
	{
		if (traverse == NULL)
			return (NULL);
		traverse = traverse->next;
		index--;
	}

	return (traverse);
}
