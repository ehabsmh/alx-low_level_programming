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
	const listint_t *slow, *fast, *traverse;

	if (!head || !head->next)
		return (0);

	slow = head;
	fast = head;
	traverse = head;
	number_nodes = 0;

	while (fast && slow && fast->next)
	{
		printf("[%p] %d\n", (void *)traverse, traverse->n);
		traverse = traverse->next;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
		number_nodes++;
	}

	return (number_nodes);
}
