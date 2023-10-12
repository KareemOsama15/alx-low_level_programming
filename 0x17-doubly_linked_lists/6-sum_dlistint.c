#include "lists.h"

/**
 * sum_dlistint - function return sum of linked list
 *
 * @head: pointer to first node
 * Return: sum of linked list values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (sum);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
