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
	ul k_index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[k_index]->key == NULL)
		return (NULL);

	return (ht->array[k_index]->value);
}
