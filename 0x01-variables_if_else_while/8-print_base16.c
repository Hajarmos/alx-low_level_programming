#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char alph[6] = "abcdef";
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 0; i < 6; i++)
		putchar(alph[i]);
	putchar('\n');
	return (0);
}
