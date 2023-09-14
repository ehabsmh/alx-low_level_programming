#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer to the head pointer (First node)
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = NULL;
	dlistint_t *v = NULL;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(t);
		return (1);
	}

	t = get_dnodeint_at_index(*head, index);

	if (!t)
		return (-1);

	if (t->next)
	{
		v = t->next;

		t->next = v->next;
		if (v->next)
			v->next->prev = t;
		free(v);
		return (1);
	}
	return (-1);
}

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: First node
 * @index: The index of a node
 * Return: the nth node of the linked list OTHERWISE NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traverse = head;

	if (index == 0)
		return (head);

	while (index != 1)
	{
		if (traverse == NULL)
			return (NULL);
		traverse = traverse->next;
		index--;
	}

	return (traverse);
}
