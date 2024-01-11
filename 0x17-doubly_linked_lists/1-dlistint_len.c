#include "lists.h"

/**
 * dlistint_len - this function prints the number of elements
 * @h: head parameter
 * Return: node count
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elem_count;

	elem_count = 0;

	if (h == NULL)
		return (elem_count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		elem_count++;
		h = h->next;
	}
	return (elem_count);
}
