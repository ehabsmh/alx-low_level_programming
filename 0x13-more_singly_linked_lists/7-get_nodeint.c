#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of the LS
 * @head: The head pointer to the Linked List
 * @index: the index of the node
 *
 * Return: The nth node, OTHERWISE return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;

	if (!head)
		return (NULL);

	traverse = head;

	if (index == 0)
		return (traverse);

	while (index > 0 && traverse)
	{
		traverse = traverse->next;
		index--;
	}
	if (!traverse)
		return (NULL);

	return (traverse);
}
