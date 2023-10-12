#include "lists.h"

/**
 * free_dlistint - function free linked list elements
 *
 * @head: pointer to first node
 *
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL, *temp = head;

	while (temp)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
}
