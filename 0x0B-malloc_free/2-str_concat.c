#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * checknull - return empty string is NULLpassed
 * @s: null string
 * Return empty string
 */
char *checknull(char *s)
{
	int len = 0, i = 0;
	char *cp;

	if (s == NULL)
	{
		cp = malloc(1);
		if (cp == NULL)
			return (NULL);
		*cp = '\0';
		return (cp);
	}
	while (*(s + len))
		len++;
	cp = malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
		return (NULL);
	while (*(s + i))
	{
		*(cp + i) = *(s + i);
		i++;
	}
	return (cp);
}
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *con, *cps1, *cps2;
	int n;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	cps1 = checknull(s1);
	cps2 = checknull(s2);
	while (*(cps1 + i))
		i++;
	while (*(cps2 + j))
		j++;
	n = sizeof(char) * (i + j + 1);
	con = malloc(n);
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
