#include "main.h"

/**
 * _strcat - concatenates two strings
 *@dest: char
 *@src: char
 * Return: resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		b++;
	for (i = a; i < (a + b); i++)
	{
		dest[a] = src[c];
		c++;
	}
	dest[a + b] = '\0';
	return (*dest);

}
