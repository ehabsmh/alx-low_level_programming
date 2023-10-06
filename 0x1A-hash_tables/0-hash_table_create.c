#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: The size of the array
 * Return: The newely created hash table
 * if something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	ul i;

	if (size <= 0)
		return (NULL);

	/* Create a hash table */
	ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * ht->size);

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
