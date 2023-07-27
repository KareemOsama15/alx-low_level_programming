#include "lists.h"

/**
 * add_node - function that adds a new node at
 *	the beginning of a list_t list
 *
 * @head: pointer to node
 * @str: string
 * Return: elements of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (len = 0; str[len] != '\0'; len++)
		;
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
