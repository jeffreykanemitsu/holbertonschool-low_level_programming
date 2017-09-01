#include "hash_tables.h"
/**
 * hash_table_get - retries a value associated with a key
 * @ht: hash table that you get the value from
 * @key: key you are looking for
 * Return: value assocaited with the element, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *temp_node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(key, temp_node->key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}
