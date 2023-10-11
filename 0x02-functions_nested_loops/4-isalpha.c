#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * Return: 1 if c is a letter(lowercase$uppercase)
 */

int _isalpha(int c)

{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
