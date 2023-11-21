#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all contents of a list
 * @head: reference for first node
 *
 * Return: summation
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		add += current->n;
		current = current->next;
	}

	return (add);
}
