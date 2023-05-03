#include "main.h"

/**
 * print_most_numbers - prints digits 0 - 9, not 2 & 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	char c = 48;

	while (c < 58)
	{
		if (c == 50 || c == 52)
			c++;
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
