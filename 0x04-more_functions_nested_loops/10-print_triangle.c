#include "main.h"


/**
 * print_triangle - prints triangle
 * @size: length of triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, a;

	if (size < 1)
		_putchar('\n');
	for (a = size; a > 0; a--)
	{
		for (i = a; i > 1; i--)
		{
			_putchar(' ');
		}
		for (i--; i <= size - a; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
