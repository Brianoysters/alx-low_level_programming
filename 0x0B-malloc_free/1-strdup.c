#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: input string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *newstring;

	int inputstring, copyindex = 0;

	if (str == NULL)
		return (NULL);

	inputstring = 0;

	while (str[inputstring] != '\0')

		inputstring++;

	newstring = malloc(sizeof(char) * (inputstring + 1));

	if (newstring == NULL)

		return (NULL);

	for (copyindex = 0; str[copyindex]; copyindex++)

		newstring[copyindex] = str[copyindex];
	return (newstring);
}

