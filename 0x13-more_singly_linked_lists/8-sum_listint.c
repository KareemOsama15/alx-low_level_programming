#include "lists.h"

/**
 * sum_listint - function that returns
 *  the sum of all the data (n) oflinked list.
 *
 * @head: pointer to first node
 *
 * Return: sum of nodes data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	if (head == NULL)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
