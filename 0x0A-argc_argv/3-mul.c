#include <stdio.h>
#include "main.h"

/**
  * _atoi - converts a string to an integer
  * @s: string input
  * Return: the int converted from the string
  */

int _atoi(char *s)

{
	int m, o, k, len, p, digit;

	m = 0;

	o = 0;

	k = 0;

	len = 0;

	p = 0;

	digit = 0;

	while (s[len] != '\0')
		len++;
	while (m < len && p == 0)
	{
		if (s[m] == '-')
			++o;
		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';

			if (o % 2)
				digit = -digit;
			k = k * 10 + digit;

			p = 1;

			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			p = 0;
		}
		m++;
	}
	if (p == 0)
		return (0);
	return (k);
}

/**
 * main - outputs the product of two numbers
 * @argc: arguments counts
 * @argv: arguments vector
 * Return: 0 (Success), and 1 if (Error)
 */

int main(int argc, char *argv[])
{
	int finding, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	finding = a * b;
	printf("%d\n", finding);
	return (0);
}
