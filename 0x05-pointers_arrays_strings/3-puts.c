#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of the string
 */

void _puts(char *str)
{
	int len, i;

	len = _strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
