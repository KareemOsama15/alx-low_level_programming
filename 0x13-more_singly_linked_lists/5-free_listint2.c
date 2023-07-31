#include "lists.h"

/**
 * free_listint2 - unction that frees a list
 *
 * @head: pointer to pointer to first node
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	temp = *head;
	while (temp != NULL)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}
	*head = NULL;
}
