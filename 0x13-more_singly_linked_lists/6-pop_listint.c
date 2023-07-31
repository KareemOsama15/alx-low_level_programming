#include "lists.h"

/**
 * pop_listint - function that deletes
 *  the head node of a linked list
 *
 * @head: pointer to pointer to first node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	ptr = NULL;

	return (n);
}
