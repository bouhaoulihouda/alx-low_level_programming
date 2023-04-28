#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the nbr of elmts in a linked lst
 * @h: ptr to the list_t lst
 *
 * Return: nbr of elmts in h
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}
