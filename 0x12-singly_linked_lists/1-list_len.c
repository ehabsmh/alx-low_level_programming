#include "lists.h"

/**
 * list_len - counts the elements in a linked list
 * @h: the head pointer
 *
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	const list_t *ptr = NULL;

	if (!h)
		return (0);

	ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
