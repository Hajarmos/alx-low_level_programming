#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char alph1[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
		putchar(alph1[i]);
	putchar('\n');
	return (0);
}
