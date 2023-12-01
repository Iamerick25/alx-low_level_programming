#include "hash_tables.h"

/**
 * key_index - get the hash table index to a given key
 * @key: the key to hash
 * @size: the hash table size
 *
 * Return: the index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
