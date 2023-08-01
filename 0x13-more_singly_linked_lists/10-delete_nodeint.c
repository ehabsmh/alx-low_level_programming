#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at certain index
 * @head: Pointer to the head pointer
 * @index: The index where the node should be deleted
 *
 * Return: 1 if the node has been deleted, OTHERWISE return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t LS_len;
	listint_t *traverse, *previous;

	if (!*head)
		return (-1);

	LS_len = listint_len(*head);

	if (index > LS_len - 1)
		return (-1);

	traverse = *head;
	previous = *head;

	if (index == 0)
	{
		*head = traverse->next;
		free(traverse);
		traverse = NULL;
		return (1);
	}

	while (index > 0)
	{
		previous = traverse;
		traverse = traverse->next;
		index--;
	}

	previous->next = traverse->next;
	free(traverse);
	traverse = NULL;
	return (1);
}

/**
 * listint_len - Returns the number of nodes
 * @h: Pointer to the head node
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number_nodes;
	const listint_t *traversal;

	if (!h)
		return (0);

	traversal = h;
	number_nodes = 0;

	while (traversal)
	{
		traversal = traversal->next;
		number_nodes++;
	}

	return (number_nodes);
}
