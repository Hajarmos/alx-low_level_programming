#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string
 *
 * Return: char
 */

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
				break;
			}
	}
	return (s);
}
