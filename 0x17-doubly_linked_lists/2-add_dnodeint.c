#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to the head pointer (first node)
 * @n: The data
 * Return: new node OTHERWISE NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
