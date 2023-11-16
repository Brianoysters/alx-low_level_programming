#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of linked list
 * @head: pointer to the list_t
 * @str: strig parameter
 * Return: element address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	 unsigned int len = 0;

	if (new == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	new->str = strdup(str);

	new->len = len;

	new->next = (*head);

	(*head) = new;

	return (*head);
}
