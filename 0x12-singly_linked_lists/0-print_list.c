#include "lists.h"

/**
 * print_list - prints the linked list
 * @h: the head pointer
 *
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int i;

	const list_t *ptr = NULL;

	if (!h)
		return (0);

	ptr = h;


	for (i = 0; ptr; ptr = ptr->next, i++)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			continue;
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
	}

	return (i);
}
