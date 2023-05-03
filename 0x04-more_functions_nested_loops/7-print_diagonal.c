#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: length of diagonal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, a = n;

	if (n <= 0)
		_putchar('\n');
	for (; a > 0; a--)
	{
		for (i = n - a; i > 0; i--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
