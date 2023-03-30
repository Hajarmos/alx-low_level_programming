#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string
 *
 * Return: char
 */

char *leet(char *s)
{
	char a[] = "aeotl", b[] = "43071";
	int i = 0, j;

	while (*(s + i))
		for (j = 0; j < 5; j++)
			if (*(s + i) == a[j] || *(s + i) == a[j] - 32)
				*(s + i) = b[j];
	return (s);
}
