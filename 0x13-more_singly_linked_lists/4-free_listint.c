#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer of the 1st node
 * Return: void
 **/
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
