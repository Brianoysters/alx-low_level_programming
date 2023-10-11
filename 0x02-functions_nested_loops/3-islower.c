#include "main.h"
/**
 * _islower -  function that checks for lowercase character
 * Return: 0-if lowercase, 1-if not (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

