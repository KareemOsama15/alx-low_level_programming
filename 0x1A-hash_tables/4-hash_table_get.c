#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
