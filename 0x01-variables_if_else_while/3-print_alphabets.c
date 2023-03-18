#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char alph1[26] = "abcdefghijklmnoprstuvwxyz";
	char alph2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alph1[i]);
	for (i = 0; i < 26; i++)
		putchar(alph2[i]);
	putchar('\n');
	return (0);
}
