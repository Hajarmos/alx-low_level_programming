#include "main.h"

/**
 * string_toupper- changes lowercase of a string to uppercase.
 * @s: string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	while (*s && *s != '\0')
	{
		if (*s < 123 && *s > 96)
			*s -= 32;
		s++;
	}
	return (s);
}
