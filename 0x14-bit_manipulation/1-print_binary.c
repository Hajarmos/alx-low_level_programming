#include "main.h"


/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int cp;
	int i = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	cp = n;
	while (cp)
	{
		cp >>= 1;
		i++;
	}
	while (i)
	{
		if (n >> i)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
	_putchar('\n');
}

