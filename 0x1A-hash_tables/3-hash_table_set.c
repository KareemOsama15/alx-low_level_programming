#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int i;
	hash_node_t *newNode = NULL, *temp = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
			}
			temp = temp->next;
		}
		return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[i];
	ht->array[i] = newNode;

	return (1);
}