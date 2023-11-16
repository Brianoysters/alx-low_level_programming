#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of linked list
 * @head: pointer to the list_t
 * @str: string
 * Return: address of the new element and NULL if unsuccessful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp = *head;
	unsigned int len = 0;

	if (newNode == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	newNode->str = strdup(str);

	newNode->len = len;

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)

	{
		temp = temp->next;
	}

	temp->next = newNode;

	return (newNode);
}
