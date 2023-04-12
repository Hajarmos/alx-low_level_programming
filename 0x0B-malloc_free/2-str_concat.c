#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	while (*(s1 + k) && *(s1 + k) != '\0')
	{
		*(con + k) = *(s1 + k);
		k++;
	}
	while (*(s2 + l) != '\0')
	{
		*(con + k + l) = *(s2 + l);
		l++;
	}
	*(con + k + l) = '\0';
	return (con);
}
