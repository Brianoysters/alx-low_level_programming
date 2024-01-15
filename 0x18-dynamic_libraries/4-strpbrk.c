#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: first parameter
 * @accept: parameter function
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
		if (*s == accept[p])
		return (s);
		}
	s++;
	}
	return (0);
}
