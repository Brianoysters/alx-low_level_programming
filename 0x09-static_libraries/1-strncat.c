#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: concat param
 * @n: concat param
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int j;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[m] = src[j];
	m++;
	j++;
	}
	dest[m] = '\0';
	return (dest);
}
