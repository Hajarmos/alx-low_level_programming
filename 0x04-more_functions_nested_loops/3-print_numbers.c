#include "main.h"


/**
 * print_numbers - prints digits 0 - 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
