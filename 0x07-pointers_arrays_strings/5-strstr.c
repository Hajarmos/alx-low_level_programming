#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len = 0, check = 0, n = 0;
	char *c;

	while (*(needle + len) != '\0')
		len++;

	for (i = 0; *(haystack + i) != '\0'; i++)
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
				if (check == 0)
					c = haystack + i;
				n++;
				check = 1;
			}
			else
				check = 0;
		}
	if (n == len && check == 1)
		return (c);
	else
		return (NULL);
}
