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

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = ptr;
		*head = new;
	}
	while (ptr)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = ptr->next;
			ptr->next = new;
		}
		ptr = ptr->next;
		i++;
	}
	return (new);
}
