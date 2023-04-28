#include <stdio.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elmts of a linked lst
 * @h: ptr to the list_t lst to print
 *
 * Return: the nbr of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sz++;
	}

	return (sz);
}
