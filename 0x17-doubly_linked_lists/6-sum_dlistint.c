#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the first node
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *traverse = head;

	if (!head)
		return (0);

	while (traverse)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}

	return (sum);
}
