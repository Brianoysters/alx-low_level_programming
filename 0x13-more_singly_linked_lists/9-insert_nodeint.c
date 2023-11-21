#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - it inserts a new node
 * @head: first node
 * @idx: new index position
 * @n: integer input
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int new_index;
	listint_t *current = malloc(sizeof(listint_t));
	listint_t *prev = *head;

	if (current == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}

	for (new_index = 0; prev && new_index < idx; new_index++)
	{
		if (new_index == idx - 1)
		{
			current->next = prev->next;
			prev->next = current;
			return (current);
		}
		else
			prev = prev->next;
	}

	return (NULL);
}
