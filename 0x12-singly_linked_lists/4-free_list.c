#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frs a lkd list
 * @head: list_t lst to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

