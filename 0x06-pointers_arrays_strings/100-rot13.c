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
	int i = 0, j;

	while (*(s + i))
	{
		for (j = 0; j < 13; j++)
			if (*(s + i) == a[j])
				*(s + i) = b[j];
		i++;
	}
	return (s);
}
