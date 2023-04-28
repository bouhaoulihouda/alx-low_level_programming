#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the begn of a linked lst
 * @head: double ptr to the list_t list
 * @str: new str to add in the nd
 *
 * Return: the add of the new elmt, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int ln = 0;

	while (str[ln])
		ln++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = ln;
	nw->next = (*head);
	(*head) = nw;

	return (*head);
}
