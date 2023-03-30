#include "main.h"

/**
 * _strncpy- copies a string.
 * @dest: char
 * @src: char
 * @n: n bytes
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
