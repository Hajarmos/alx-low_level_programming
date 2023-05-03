#include "main.h"

/**
 * print_most_numbers - prints digits 0 - 9, not 2 & 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c == '2' || c == '4')
			_putchar(++c);
		_putchar(c);
	}
	_putchar('\n');
}
