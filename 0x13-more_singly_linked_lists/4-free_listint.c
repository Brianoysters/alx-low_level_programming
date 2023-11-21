#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
