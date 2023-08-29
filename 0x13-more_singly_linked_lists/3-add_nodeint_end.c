#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer of the 1st node
 * @n: value of new node
 * Return:pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t *));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
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
