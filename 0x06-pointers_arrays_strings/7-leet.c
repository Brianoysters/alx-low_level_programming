#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int m, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[m] == s1[k])
			{
				n[m] = s2[k];
			}
		}
	}
	return (n);
}
