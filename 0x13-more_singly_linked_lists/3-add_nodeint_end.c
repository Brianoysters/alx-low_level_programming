#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_t - adds a new node
 * @head: pointer
 * @n: integer
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = current;
	return (current);
}
