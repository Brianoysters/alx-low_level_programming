#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts the number of words in a string
 * @s: string input
 * Return:count of words
 */

int count_word(char *s)
{
		int flag, m, n;
			flag = 0;
				n = 0;
				for (m = 0; s[m] != '\0'; m++)
				{
					if (s[m] == ' ')
						flag = 0;
					else if (flag == 0)
					{
						flag = 1;
						n++;
					}
				}
				return (n);
}

/**
 * **strtow - splits a string into words
 * @str: string input
 * Return: pointer to an array of str (Success)
 */

char **strtow(char *str)
{

	char **matrix, *tmp;

	int i, r = 0, len = 0, words, m = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (m)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (m + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[r] = tmp - m;
				r++;
				m = 0;
			}
		}
		else if (m++ == 0)
			start = i;
	}
	matrix[r] = NULL;
	return (matrix);
}
