#include "lists.h"

/**
 * print_listint_safe - safely print list
 * @head: The first node of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number_nodes;
	const listint_t *slow, *fast;

	if (!head || !head->next)
		return (0);

	slow = head;
	fast = head;
	number_nodes = 0;

	while (fast)
	{
		printf("[%p] %d\n", (void *)fast, fast->n);
		number_nodes++;
		slow = fast;
		fast = fast->next;

		if (slow <= fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
	}

	return (number_nodes);
}
