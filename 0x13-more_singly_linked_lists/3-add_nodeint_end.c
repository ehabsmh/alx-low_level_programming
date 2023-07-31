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
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (ptr == NULL)
		*head = new_node;
	else
	{
		for (; ptr->next;)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
