#include "lists.h"

/**
 * listint_len -print the linked lists
 * @h: the pointer of 1st node
 * Return: size of list
 **/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
