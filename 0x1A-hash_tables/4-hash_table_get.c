#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	hash = ht->array[index];
	while (hash && strcmp(hash->key, key) != 0)
	{
		hash = hash->next;
	}
	if (hash == NULL)
	{
		return (NULL);
	}
	return (hash->value);
}
