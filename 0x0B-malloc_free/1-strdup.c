#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *strcp;

	while (*(str + len))
		len++;
	strcp = malloc(sizeof(char) * len);
	if (strcp == NULL)
		return (NULL);
	while (*(str + i))
	{
		*(strcp + i) = *(str + i);
		i++;
	}
	return (strcp);
}
