#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - function deleting head node
 * @head: pointer
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int dig;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	dig = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (dig);
}

