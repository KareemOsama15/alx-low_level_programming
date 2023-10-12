#include "lists.h"

/**
 * add_dnodeint_end - function add new node
 *		at end of dlistint_t
 *
 * @head: pointer to first node
 * @n: new node value
 * Return: pointer to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newElement = NULL, *current = *head;

	newElement = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newElement)
		return (NULL);

	newElement->n = n;
	newElement->next = NULL;
	if (*head == NULL)
	{
		newElement->prev = NULL;
		*head = newElement;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		newElement->prev = current;
		current->next = newElement;
	}

	return (newElement);
}
