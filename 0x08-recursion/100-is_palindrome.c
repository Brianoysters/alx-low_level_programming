#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 *is_palindrome - function that checks if a string is a palindrome
 *@s: string to reverse
 *
 *Return: 1 if a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - outputs length of a string
 *@s: parameter to calculate length
 *
 *Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *check_palindrome - a function that checks for palindrome
 *@s: parameter to check for palindrome
 *@i: parameter enabling iteration
 *@len: string length
 *
 *Return: 1 if palindrome, 0 if no
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	else
		return (check_palindrome(s, i + 1, len - 1));
}

