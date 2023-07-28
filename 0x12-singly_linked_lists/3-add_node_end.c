#include "lists.h"
#include <string.h>
/**
 * _strlen - Evaluates the length of a string
 * @s: array of strings (decayed into a pointer when passed as an argument)
 *
 * Return: the length of the string
 */

int _strlen(const char *s) /* char *s = str; */
{
	unsigned int str_len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		str_len++;
	}

	return (str_len);
}


/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to the head pointer
 * @str: the string will be duplicated
 *
 * Return: pointer to the new node
 * if something failed return NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (!head || !new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	if (last)
	{
		while (last->next)
			last = last->next;

		last->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
