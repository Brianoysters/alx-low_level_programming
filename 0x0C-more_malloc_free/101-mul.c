#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - checks if entry is natural number
 * @s: input
 * Return: 0
 */
int is_digit(char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] < '0' || s[m] > '9')
			return (0);
		m++;
	}
	return (1);
}

/**
 * _strlen - returns length of a string
 * @s: input string
 * Return: length
 */
int _strlen(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * _outlier - takes care of all errors
 */
void _outlier(void)
{
	printf("error\n");
	exit(98);
}

/**
 * main - gets product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, rem, dig1, dig2, *output, m = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		_outlier();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	output = malloc(sizeof(int) * len);
	if (!output)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		output[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len] - '0';
		rem = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			rem += output[len1 + len2 + 1] + (dig1 * dig2);
			output[len1 + len2 + 1] = rem % 10;
			rem /= 10;
		}
		if (rem > 0)
			output[len1 + len2 + 1] += rem;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (output[i])
			m = 1;
		if (m)
			_putchar(output[i] + '0');
	}
	if (!m)
		_putchar('0');
	_putchar('\n');
	free(output);
	return (0);
}
