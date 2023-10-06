#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key
 * Return: value associated with the element,
 *				 or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	ul k_index;
	hash_node_t *traverse;

	if (!ht || !key || *key == '\0')
		return (NULL);

	k_index = key_index((const unsigned char *)key, ht->size);

	traverse = ht->array[k_index];

	while (traverse)
	{
		if (strcmp(traverse->key, key) == 0)
		{
			return (traverse->value);
		}

		traverse = traverse->next;
	}

	return (NULL);
}
