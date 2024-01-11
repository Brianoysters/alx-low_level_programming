#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: head parameter
 * @n: element count parameter
 * Return: new address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *h;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	current->next = h;

	if (h != NULL)
		h->prev = current;

	*head = current;

	return (current);
}
