#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 *  the nth node of a linked list
 *
 * @head: pointer to first node
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
