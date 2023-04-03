#include "main.h"

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
	int i, len = 0;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		if (s[i] == c)
			return (s[i]);
	return (NULL);
}
