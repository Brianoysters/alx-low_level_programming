#include "lists.h"

/**
 * get_dnodeint_at_index -this function returns the
 * nth node of a dlistint_t linked list.
 * @head: head parameter
 * @index: parameter for searching
 * Return: nth node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int list_size;
	dlistint_t *temp;

	list_size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == list_size)
	return (temp);
	list_size++;
	temp = temp->next;
	}
	return (NULL);
}
