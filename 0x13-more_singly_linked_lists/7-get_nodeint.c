#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - outputs nth node
 * @head: first node at the root
 * @index: next node index
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *current = head;

	while (current && m < index)
	{
		current = current->next;
		m++;
	}
	return (current ? current : NULL);
}
