#include "hash_tables.h"
#include "stdbool.h"

/**
 * add_beginning - updates an element of the hash table.
 * @h: The head of hash linked list
 * @key: The key
 * @value: The value associated with the key
 * Return: head if it succeeded, NULL otherwise
 */

hash_node_t *add_beginning(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *traverse;
	hash_node_t *new_node;

	traverse = *h;

	while (traverse)
	{
		if (strcmp(traverse->key, key) == 0)
		{
			free(traverse->value);
			traverse->value = strdup(value);
			if (!traverse->value)
				return (NULL);

			return (*h);
		}

		traverse = traverse->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!new_node->key)
		return (NULL);

	new_node->value = strdup(value);
	if (!new_node->key)
		return (NULL);

	new_node->next = *h;
	*h = new_node;

	return (*h);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key.
 *				value must be duplicated.
 *				value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	ul k_index;
	hash_node_t **arr;
	hash_node_t *item;

	if (!ht)
		return (0);

	if (!key || *key == '\0')
		return (0);

	/* Getting the key index */
	k_index = key_index((unsigned char *)key, ht->size);

	if (k_index == 0)
		return (0);

	arr = ht->array;
	item = arr[k_index];

	item = add_beginning(&item, key, value);

	if (!item)
		return (0);

	return (1);
}
