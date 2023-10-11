#include "main.h"

/**
 * _islower -  function that checks for lowercase character
 * @c:character to check if it islowercase
 * Return: 1-if lowercase, 0-if not (success)
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
