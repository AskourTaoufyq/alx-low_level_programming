#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of pointer to 1st node
 * Return: return value of popped node
 **/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head || !head)
		return (0);

	n = (*head)->n;
	temp = *head;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (n);
}
