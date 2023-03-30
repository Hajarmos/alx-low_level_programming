#include "main.h"

/**
 * _strncat- concatenates two strings
 * @dest:char
 * @src:char
 * @n:n bytes from src
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*dest != '\0')
		dest++;
	for (i = 0; *src != '\0' && i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}
