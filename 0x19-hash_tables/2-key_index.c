#include "hash_tables.h"

/**
 * key_index - returns index of key
 * @key: key index that is returned
 * @size: size of hash table array
 *
 * Return: index at which key/value pair should
 *	be stored in the array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
