#include "lists.h"

/**
 * free_dlistint - Frees the linked list
 * @head: The first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *traverse = head;

	while (traverse->next)
	{
		traverse = traverse->next;
		free(traverse->prev);
	}
	free(traverse);
}
