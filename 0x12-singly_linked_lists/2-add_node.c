#include "lists.h"

/**
 * add_node - inserts a new node at the start of a list_t list.
 * @head: pointer to the list's head
 * @str: string to be stored in the new node
 * return: pointer to the new head of the list
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = (list_t *) malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;
	return (*head);
}
