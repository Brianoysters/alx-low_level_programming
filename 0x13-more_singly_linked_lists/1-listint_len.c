#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * listint_len - self referential pointer to lists
 * @h: ppointer
 *
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("list is empty");
	while (h != NULL)
	{
		count++;

		h = h->next;

	}
	return (count);
}
