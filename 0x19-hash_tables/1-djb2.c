#include "hash_tables.h"
/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: string for hash
 * Return: value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash_brown;
	int c;

	hash_brown = 5381;
	while ((c = *str++))
		hash_brown = ((hash_brown << 5) + hash_brown) + c; /* hash_brown * 33 + c */
	return (hash_brown);
}
