#include "lists.h"

/**
 * list_len - return to  the number of elements in a linked list_t list.
 * @h: pointer to the list's starting node
 *
 * return: num of nodes in the list
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
