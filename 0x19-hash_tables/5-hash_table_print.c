#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_node;
	unsigned int potato;
	unsigned int hash_brown = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (potato = 0; potato < ht->size; potato++)
	{
		temp_node = ht->array[potato];
		if (temp_node != NULL)
		{
			if (hash_brown == 1)
				printf(", ");
			printf("'%s': '%s'", temp_node->key, temp_node->value);
			while ((temp_node = temp_node->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp_node->key, temp_node->value);
			}
			hash_brown = 1;
		}
	}
	printf("}\n");
}
