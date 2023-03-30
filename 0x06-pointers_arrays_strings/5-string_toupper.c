#include "main.h"

/**
 * string_toupper- changes lowercase of a string to uppercase.
 * @s: string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
		s[i++];
	}
	return (s);
}
