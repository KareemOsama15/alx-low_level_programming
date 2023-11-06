#include "hash_tables.h"

/**
 * shash_table_create - function creates a sorted hash table.
 * @size: size of hash table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_node_t **snode = NULL;
	shash_table_t *sht = NULL;
	unsigned int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	snode = malloc(sizeof(shash_node_t *) * size);
	if (snode == NULL)
	{
		free(sht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		snode[i] = NULL;
	sht->size = size;
	sht->array = snode;
	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * shash_table_sortedList - function retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @sNode: new node
 *
 * Return: no return
 */
void shash_table_sortedList(shash_table_t *ht, shash_node_t *sNode)
{
	shash_node_t *temp = NULL;

	if (ht->shead == NULL)   /* No nodes in hash table*/
	{
		ht->shead = ht->stail = sNode;
		sNode->snext = NULL;
		sNode->sprev = NULL;
	}
	else
	{
		temp = ht->shead;
		while (temp != NULL)
		{
			/*new node before current node, ascii value of new node < current node*/
			if (strcmp(sNode->key, temp->key) < 0)
			{
				sNode->snext = temp;
				sNode->sprev = temp->sprev;
				if (temp == ht->shead)    /*only one node in sorted list*/
				{
					ht->shead->sprev = sNode;
					ht->shead = sNode;
				}
				else	/*more than one node in sorted list*/
				{
					temp->sprev->snext = sNode;
					temp->sprev = sNode;
				}
				return;
			}
			temp = temp->snext;
		}
		/*case of reach tail (or) tail = head (and) newNode ascii > current node*/
		sNode->snext = NULL;
		sNode->sprev = ht->stail;
		ht->stail->snext = sNode;
		ht->stail = sNode;
	}
}

/**
 * shash_table_set - function adds an element to the sorted hash table.
 * @ht: pointer to hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int i;
	shash_node_t *temp;

	if (!ht || !key || *key == '\0' || strlen(key) == 0)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	/*first case check if a hash table cell(bucket) is have nodes */
	/* and one of its keys is the same key arg passed so change its value*/
	if (ht->array[i] != NULL)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (strcmp(key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	/*second case check if a cell is empty or point to a node*/
	/*so the new node add at first and be the head of the list*/
	temp = malloc(sizeof(shash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[i];
	ht->array[i] = temp;
	shash_table_sortedList(ht, temp);

	return (1);
}

/**
 * shash_table_get - function retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int i;
	shash_node_t *temp = NULL;

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

/**
 * shash_table_print - function that prints a sorted hash table.
 * @ht: pointer to hash table
 *
 * Return: no return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current)
	{
		printf("%s'%s': '%s'", sep, current->key, current->value);
		sep = ", ";
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a sorted hash table in reverse.
 * @ht: pointer to hash table
 *
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		printf("%s'%s': '%s'", sep, current->key, current->value);
		sep = ", ";
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a sorted hash table.
 * @ht: pointer to hash table
 *
 * Return: no return
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp = NULL, *current = NULL;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
