#include "hash_tables.h"
/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table to add or update
 * @key: key/value to add/update
 * @value: value associated with key
 *
 * Return: 1 if success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp_node, *new_node;
	unsigned long int x;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	x = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[x];
	if (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			tmp_node->value = strdup(value);
			return (1);
		}
		tmp_node = tmp_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[x] != NULL)
		new_node->next = ht->array[x];
	ht->array[x] = new_node;
	return (1);
}
