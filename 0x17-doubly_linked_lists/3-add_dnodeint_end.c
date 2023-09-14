#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to the head pointer (first node)
 * @n: The data
 * Return: new node OTHERWISE NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *trav = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (trav->next)
		{
			trav = trav->next;
		}
		trav->next = new;
	}

	new->prev = trav;

	return (new);
}
