#include "main.h"
/**
 * main - print -putchar
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char tab[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	for (i = 0; i < 9; i++)
	{
		_putchar(tab[i]);
	}
	return (0);
}
