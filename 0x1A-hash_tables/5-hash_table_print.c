#include "hash_tables.h"

/**
 * hash_table_print - print key value pair in hash tables
 * @ht: the hash table
 * Return: null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag == 1)
			{
				printf(", ");
			}
			hash = ht->array[i];
			while (hash != NULL)
			{
				printf("'%s': '%s'", hash->key, hash->value);
				hash = hash->next;
				if (hash != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
