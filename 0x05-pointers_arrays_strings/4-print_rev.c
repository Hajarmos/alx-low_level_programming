#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);
	for (i = (len - 1); i > 0; i--)
		_putchar(s[i]);
	_putchar(s[0]);
	_putchar('\n');
}
