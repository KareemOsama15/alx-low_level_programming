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

	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
