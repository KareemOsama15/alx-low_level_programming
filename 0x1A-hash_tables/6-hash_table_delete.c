#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table
 *
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp = NULL, *current = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			current = temp;
			temp = temp->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
