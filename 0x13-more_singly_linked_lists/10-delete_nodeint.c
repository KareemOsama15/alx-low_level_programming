#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes
 *   the node at index index of a linked list
 *
 * @head: pointer to pointer to first node
 * @index: index of the node
 *
 * Return: 1 if success , -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	prev = NULL;
	while (ptr)
	{
		if (i == index)
		{
			if (prev == NULL)
				*head = ptr->next;
			else
				prev->next = ptr->next;
			free(ptr);
			ptr = NULL;
			return (1);
		}
		prev = ptr;
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
