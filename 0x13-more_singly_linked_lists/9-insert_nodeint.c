#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 *	 a new node at a given position.
 *
 * @head: pointer to first node
 * @idx: index of the node
 * @n: value of n
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL && idx == 0)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	ptr = *head;
	while (ptr)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}
	free(new);
	return (NULL);
}
