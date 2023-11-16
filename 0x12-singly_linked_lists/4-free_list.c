#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *newtemp;

	while (head)
	{
		newtemp = head->next;
		free(head->str);
		free(head);
		head = newtemp;
	}
}
