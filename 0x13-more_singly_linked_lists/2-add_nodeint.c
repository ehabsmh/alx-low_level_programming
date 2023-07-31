#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: Pointer to the head pointer
 * @n: The data
 *
 * Return: New node as head if the head itself isn't exist
 * OTHERWISE return null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
