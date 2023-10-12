#include "lists.h"

/**
 * get_dnodeint_at_index - function return
 *		nth node of dlistint_t
 *
 * @head: pointer to first node
 * @index: position of node
 * Return: pointer to node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t length = dlistint_len(head) - 1;

	if (head == NULL || index > length)
		return (NULL);
	else if (index == 0)
		return (head);

	while (index != 0)
	{
		/* 10 15 20 30 40   idx = 4*/
		if (temp == NULL)
        	return (NULL);
		temp = temp->next;
		index--;
	}
	return (temp);
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
