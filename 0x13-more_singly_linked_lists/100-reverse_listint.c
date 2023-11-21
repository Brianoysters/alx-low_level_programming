#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
