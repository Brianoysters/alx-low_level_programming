#include "lists.h"

/**
 * insert_dnodeint_at_index - this function inserts a
 * new node at a specific position
 * @h: head parameter
 * @idx: indexing parameter
 * @n: new node opearand
 * Return: current address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *head;
	unsigned int m;

	current = NULL;
	if (idx == 0)
		current = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					current = add_dnodeint_end(h, n);
				else
				{
					current = malloc(sizeof(dlistint_t));
					if (current != NULL)
					{
						current->n = n;
						current->next = head->next;
						current->prev = head;
						head->next->prev = current;
						head->next = current;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}

	return (current);
}
