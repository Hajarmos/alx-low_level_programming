#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; *(s + i) != 32; i++)
		for (j = 0; j != '\0'; j++)
			if (*(accept + j) == *(s + i))
				n++;
	return (n);
}
