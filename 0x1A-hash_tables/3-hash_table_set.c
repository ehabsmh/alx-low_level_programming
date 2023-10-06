#include "hash_tables.h"
#include "stdbool.h"

/**
 * hash_table_update - updates an element of the hash table.
 * @node: The hash table
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

bool hash_table_update(hash_node_t *node, const char *key, const char *value)
{
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (true);
		}

		node = node->next;
	}

	return (false);
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
	hash_node_t *item, *new_node;

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

	new_node = item;
	/* check if some update required */
	if (hash_table_update(new_node, key, value) == 1)
		return (1);

	/* Flow here means insertion required */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = item;
	item = new_node;

	return (1);
}
