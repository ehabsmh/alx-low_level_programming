#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) of the LS
 * @head: Pointer to the first node
 *
 * Return: the sum of all data, OTHERWISE return 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *traverse;

	if (!head)
		return (0);

	traverse = head;
	sum = 0;

	while (traverse)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}

	return (sum);
}
