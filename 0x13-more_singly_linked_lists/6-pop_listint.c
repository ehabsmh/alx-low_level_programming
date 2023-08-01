#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: pointer to the head pointer
 *
 * Return: data of head, OTHERWISE return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *head_cpy;

	if (!head)
		return (0);

	head_cpy = *head;

	*head = head_cpy->next;
	data = head_cpy->n;

	free(head_cpy);

	return (data);
}
