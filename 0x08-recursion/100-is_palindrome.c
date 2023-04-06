#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: lengh of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}

/**
 * check - check palindrome
 * @s: string
 * @leng: int
 *
 * Return: int
 */

int check(char *s, int leng)
{
	if (leng == 0 || leng == 1)
		return (1);
	if (*s == *(s + (leng - 1)))
		return (check((s + 1), (leng - 2)));
	else
		return (0);
}

/**
 * is_palindrome - string is a palindrome or not
 * @s: string
 *
 * Return: 1 if the string is palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (check(s, len));
}
