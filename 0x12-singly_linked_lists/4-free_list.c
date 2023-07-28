#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: first node
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *ptr = head;

	if (head)
	{
		while (ptr)
		{
			free(ptr->next);
			free(ptr->str);
			ptr = ptr->next;
		}
	}

	free(head);
}
