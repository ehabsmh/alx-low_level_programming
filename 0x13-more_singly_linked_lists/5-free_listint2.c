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

	if (!traverse)
		return;

	while (traverse)
	{
		traverse = traverse->next;
		free(*head);
		*head = traverse;
	}

	head = NULL;
}
