#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table.
 * @size: size of hash table
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;
	hash_node_t **hashNode = NULL;
	size_t i;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashNode = malloc(sizeof(hash_node_t *) * size);
	if (hashNode == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashNode[i] = NULL;

	hashTable->array = hashNode;
	hashTable->size = size;

	return (hashTable);
}
