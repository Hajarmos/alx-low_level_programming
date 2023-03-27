#include "main.h"
/**
 * main - print -putchar
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char tab[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		_putchar(tab[i]);
	}
	return (0);
}
