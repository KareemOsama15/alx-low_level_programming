#include "lists.h"

/**
 * add_node_end - function that adds a new node at
 *	the end of a list_t list
 *
 * @head: pointer to node
 * @str: string
 * Return: elements of linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (len = 0; str[len] != '\0'; len++)
		;
	new->len = len;
	new->next = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;
	return (*head);
}
