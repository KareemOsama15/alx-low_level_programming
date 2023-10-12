#include "lists.h"

/**
 * add_dnodeint - function add new node
 *		at beginning of dlistint_t
 *
 * @head: pointer to first node
 * @n: new node value
 * Return: pointer to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newElement = NULL;

	newElement = malloc(sizeof(dlistint_t));
	if (!newElement)
		return (NULL);

	newElement->n = n;
	newElement->prev = NULL;
	newElement->next = *head;
	if (*head)
		(*head)->prev = newElement;
	*head = newElement;

	return (newElement);
}
