#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, m, o;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		m = 0;
	else
	{
		for (m = 0; s2[m]; m++)
			;
	}
	if (m > n)
		m = n;
	s = malloc(sizeof(char) * (i + m + 1));
	if (s == NULL)
		return (NULL);
	for (o = 0; o < i; o++)
		s[o] = s1[o];
	for (o = 0; o < m; o++)
		s[o + i] = s2[o];
	s[i + m] = '\0';
	return (s);
}
