#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: The key to get the index from.
 * @size: is the size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 *				 in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	ul k_index = hash_djb2(key) % size;

	if (key == NULL || size == 0)
		return (0);

	return (k_index);
}
