#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node to the list
 * @head: pointer
 * @n: integer
 *
 * Return: 0(success)
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Newlist = malloc(sizeof(listint_t));

	if (Newlist == NULL)
		return (NULL);

	Newlist->n = n;
	Newlist->next = *head;
	*head = Newlist;
	return (Newlist);
}
