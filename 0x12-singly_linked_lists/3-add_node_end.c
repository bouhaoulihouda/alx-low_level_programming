#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a lkd list
 * @head: dbl ptr to the list_t list
 * @str: str to put in the new node
 *
 * Return: addr of the new elmt, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *tmp = *head;
	unsigned int ln = 0;

	while (str[ln])
		ln++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = ln;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nw;

	return (nw);
}
