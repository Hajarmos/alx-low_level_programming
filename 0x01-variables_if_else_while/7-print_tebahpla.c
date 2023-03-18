#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
