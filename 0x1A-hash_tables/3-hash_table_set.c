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
	hash_node_t *temp;

	temp = *h;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*h);
		}

		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;
	*h = temp;

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
	hash_node_t *item;

	if (!ht)
		return (0);

	if (!key || *key == '\0')
		return (0);

	/* Getting the key index */
	k_index = key_index((unsigned char *)key, ht->size);

	item = ht->array[k_index];

	if (!add_beginning(&item, key, value))
		return (0);

	return (1);
}
