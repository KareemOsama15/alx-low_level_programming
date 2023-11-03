#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table
 *
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned int i;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			printf("%s'%s': '%s'", sep, current->key, current->value);
			sep = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
