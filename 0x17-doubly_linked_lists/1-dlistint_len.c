#include "lists.h"

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
