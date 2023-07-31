#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of LS
 * @head: Pointer to the head pointer
 * @n: The data
 *
 * Return: NULL if fails OTHERWISE return new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *traverse;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	if (!*head)
	{
		*head = new_node;
	}

	new_node->n = n;
	new_node->next = NULL;

	traverse = *head;

	while (traverse->next)
		traverse = traverse->next;

	traverse->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
