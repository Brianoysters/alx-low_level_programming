#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: character to check
 *
 * Return: 0 (not cap) or 1(caps)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
