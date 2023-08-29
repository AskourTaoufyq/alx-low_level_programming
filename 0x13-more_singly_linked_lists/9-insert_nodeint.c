#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer of the 1st node
 * @idx: index to insert new node
 * @n: value new node
 * Return: address of new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t *));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		temp = temp->next;
		i++;
	}

	return (NULL);
}
