#include "lists.h"

/**
 * list_len - return to  the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return:  numbers of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
