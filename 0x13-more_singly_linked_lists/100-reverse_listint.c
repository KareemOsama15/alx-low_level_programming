#include "lists.h"

/**
 * reverse_listint - function reverses linked list
 *
 * @head: pointer to pointer to first node
 *
 * Return: address of first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	/*because in last node nxt updated by NULL,*/
	/* so we go to prev to take address of last node*/
	*head = prev;
	return (*head);
}
