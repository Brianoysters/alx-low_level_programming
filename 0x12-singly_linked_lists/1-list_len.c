#include <stdlib.h>
#include "lists.h"

/**
 * list_len - outputs number of elements in a linked list
 * @h: pointer to list_
 * Return: num of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
