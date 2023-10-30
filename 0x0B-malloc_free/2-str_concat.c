#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: first input parameter
 * @s2: second input parameter
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);
	len1 = len2 = 0;

	while (s1[len1] != '\0')
	{
		result[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		result[len1] = s2[len2];
		len1++, len2++;
	}

	result[len1] = '\0';
	return (result);
}
