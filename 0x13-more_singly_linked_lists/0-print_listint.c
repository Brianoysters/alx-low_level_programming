#include <stdio.h>
#include "lists.h"

/**
 * print_listint - outputs all contents of a list
 * @h: self referential pointer
 *
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0; /*Variable to store the number of nodes*/

	if (h == NULL)
		printf("list is empty");

	while (h != NULL)
	{
		count++;

		printf("%d\n", h->n);

		h = h->next;
	}
	return (count); /*Return the number of nodes*/
}
