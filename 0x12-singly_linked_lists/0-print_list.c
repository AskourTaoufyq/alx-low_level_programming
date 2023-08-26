#include "lists.h"

/**
 * print_list : display all elements of a list_t linked list .
 * @h : linked list
 * return : num of nodes
**/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
