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

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 32;
			else
				for (j = 0; j < 13; j++)
					if (sep[j] == *(s + i - 1))
						*(s + i) -= 32;
		}

		i++;
	}
	return (s);
}
