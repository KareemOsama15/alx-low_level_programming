#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes
 *      the node at index of dlistint_t
 *
 * @head: pointer to first node
 * @index: position of node
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *temp = *head;

	if (!*head)
		return (-1);
	else if (index > dlistint_len(*head))
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		index--;
		while (index != 0)
		{
			/* 10 15 20 25 >30 40  idx = 3,2,1,0 */
			temp = temp->next;
			index--;
		}
		current = temp->next;
		temp->next = temp->next->next;
		if (temp->next)
			temp->next->prev = temp;
		free(current);
	}
	return (1);
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
