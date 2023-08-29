#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 * @head: pointer of the 1st pointer
 * @index: index of node to get
 * Return: pointer to the node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
