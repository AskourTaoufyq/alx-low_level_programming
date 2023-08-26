#include "lists.h"

/**
 * add_node_end - appends a new node at the end of a list_t linked list.
 * @head: pointer to the list's head
 * @str: string content for the new node
 * return: pointer to the new node, or NULL if unsuccessful
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	if (str == NULL)
		return (NULL);

	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
