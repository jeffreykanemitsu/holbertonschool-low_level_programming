#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table that is going to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	usnigned int i;
	hash_node_t *next_node;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next_node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next_node;
		}
	}
	free(ht->array);
	ht->size = 0;
	ht->array = NULL;
	free(ht);
}
