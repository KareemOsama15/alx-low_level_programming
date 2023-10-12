#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts
 *      a new node at a given position
 *
 * @h: pointer to first node
 * @idx: position of node
 * @n: value of new node
 * Return: pointer to node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newElement = NULL, *temp = *h;

	if (idx > dlistint_len(*h))
		return (NULL);
	else if (idx == 0)
	{
		add_dnodeint(&(*h), n);
	}
	else
	{
		newElement = malloc(sizeof(dlistint_t));
		if (!newElement)
			return (NULL);
		newElement->n = n;

		idx--;
		while (idx != 0)
		{
			/* 10 15 20 25 - >30 40  idx = 3,2,1,0 */
			temp = temp->next;
			idx--;
		}
		newElement->prev = temp;
		newElement->next = temp->next;
		if (temp->next)
			temp->next->prev = newElement;
		temp->next = newElement;

		return (newElement);
	}
	return (NULL);
}

/**
 * dlistint_len - function returns number
 *   of linked list nodes
 *
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (!h)
		return (count);
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
