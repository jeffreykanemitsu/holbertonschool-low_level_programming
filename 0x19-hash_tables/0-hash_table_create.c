#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_brown;
	unsigned long int potato;

	if (size == 0)
		return (NULL);
	hash_brown = malloc(sizeof(hash_table_t));
	if (hash_brown == NULL)
		return (NULL);
	hash_brown->size = size;
	hash_brown->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_brown->array == NULL)
		return (NULL);
	for (potato = 0; potato < size; potato++)
		hash_brown->array[potato] = NULL;
	return (hash_brown);
}
