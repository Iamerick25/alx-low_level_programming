#include "hash_tables.h"

/**
 * hash_table_set - add element into hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value to keep
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newhash;
	char *new_value;
	unsigned long int index, i;

	if (ht == NULL || value == NULL || *key == '\0' || key == NULL)
	{
		return (0);
	}
	new_value = strdup(value);
	if (new_value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}
	newhash = malloc(sizeof(hash_node_t));
	if (newhash == NULL)
	{
		return (0);
	}
	newhash->key = strdup(key);
	if (newhash->key == NULL)
	{
		free(newhash);
		return (0);
	}
	newhash->value = new_value;
	newhash->next = ht->array[index];
	ht->array[index] = newhash;
	return (1);
}
