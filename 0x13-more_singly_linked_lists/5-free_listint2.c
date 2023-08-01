#include "lists.h"

/**
 * free_listint2 - frees the memory
 * @head: Pointer to The head pointer of the linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *traverse = *head;
	listint_t *next_node = NULL;

	if (!traverse)
		return;

	while (traverse)
	{
		next_node = traverse->next;
		free(traverse);
		traverse = next_node;
	}

	*head = NULL;
}
