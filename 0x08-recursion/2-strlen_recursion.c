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
