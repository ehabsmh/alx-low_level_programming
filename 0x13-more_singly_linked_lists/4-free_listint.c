#include "lists.h"

/**
 * free_listint - frees the memory
 * @head: The head of the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	if (!head)
		return;

	while (ptr->next)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}

	free(head);
}
