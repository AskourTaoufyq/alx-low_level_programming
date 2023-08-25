#include "lists.h"

/**
 * _strlen - return to  the length of a string
 * @s: string to be measured
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node - add  new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
