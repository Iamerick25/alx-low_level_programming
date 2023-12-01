#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: the hashtable
 * Return: null
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *table = ht;
	hash_node_t *newhash, *tmphash;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			newhash = ht->array[i];
			while (newhash != NULL)
			{
				tmphash = newhash->next;
				free(newhash->key);
				free(newhash->value);
				free(newhash);
				newhash = tmphash;
			}
		}
	}
	free(table->array);
	free(table);

}
