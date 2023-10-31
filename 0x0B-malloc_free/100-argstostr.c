#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: command-line arguments
 * @av: number of array arguments
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int m, o, k = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (o = 0; av[m][o]; o++)
			p++;
	}
	p += ac;
	str = malloc(sizeof(char) * p + 1);

	if (str == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
	for (o = 0; av[m][o]; o++)
	{
		str[k] = av[m][o];
		k++;
	}
	if (str[k] == '\0')
	{
		str[k++] = '\n';
	}
	}
	return (str);
}
