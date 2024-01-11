#include "lists.h"

/**
 * delete_dnodeint_at_index -this function deletes
 * the node at specific index of a dlistint_t linked list
 * @head: head parameter
 * @index: index operator
 * Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_1;

	dlistint_t *head_2;

	unsigned int m;

	head_1 = *head;

	if (head_1 != NULL)
		while (head_1->prev != NULL)
			head_1 = head_1->prev;

	m = 0;

	while (head_1 != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = head_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head_2->next = head_1->next;

				if (head_1->next != NULL)
					head_1->next->prev = head_2;
			}

			free(head_1);
			return (1);
		}
		head_2 = head_1;
		head_1 = head_1->next;
		m++;
	}
	return (-1);
}
