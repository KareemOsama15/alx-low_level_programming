#include "lists.h"

/**
 * free_listint - unction that frees a list
 *
 * @head: pointer to pointer to first node
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
