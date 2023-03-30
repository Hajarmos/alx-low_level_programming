#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i = 0, j;

	while (*s && s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
			if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		i++;
	}
	return (s);
}
