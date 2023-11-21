#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a sigly linked list
 * @head: first node
 * @index: position index to the node to be deleted
 * Return: 1 if (Success), or -1 if (Failed opeeration)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *current = NULL;
	unsigned int ref_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (ref_index < index - 1)
	{
		if (prev == NULL)
			return (-1);
		if ((prev->next) == NULL)
			return (-1);
		prev = prev->next;
		ref_index++;
	}


	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}
