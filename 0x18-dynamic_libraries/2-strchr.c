#include "main.h"

/**
  * _strchr - locate a char in a string
  * @s: First parameter
  * @c: second parameter
  * Return: 0
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (0);
}
