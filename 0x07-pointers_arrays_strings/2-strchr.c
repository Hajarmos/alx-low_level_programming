#include "main.h"
#include <stddef.h>

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: char
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
			i++;
		else
			return (s + i);
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
