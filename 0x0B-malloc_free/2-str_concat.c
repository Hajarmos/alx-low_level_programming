#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * checknull - return empty string is NULLpassed
 * @s: null string
 * Return: empty string
 */
char *checknull(char *s)
{
	int len __attribute__((unused)), i __attribute__((unused));
	char *cp;

	if (s == NULL)
	{
		cp = malloc(sizeof(char));
		if (cp == NULL)
			return (NULL);
		*(cp + 0) = '\0';
		return (cp);
	}
	len = 0;
	i = 0;
	while (*(s + len))
		len++;
	cp = malloc(sizeof(char) * len);
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
 * size - return size of string
 * @str: string
 * Return: int
 */
int size(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
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
	unsigned int k = 0, l = 0, n;

	cps1 = checknull(s1);
	cps2 = checknull(s2);
	if (s1 == NULL && s2 == NULL)
		n = sizeof(char);
	else if (s1 == NULL && s2 != NULL)
		n = size(s2);
	else if (s1 != NULL && s2 == NULL)
		n = size(s1);
	else

		n = (size(s1) + size(s2) + 1) / 4;
	con = malloc(sizeof(char) * n);
	if (con == NULL)
		return (NULL);
	while (*(cps1 + k) && *(cps1 + k) != '\0')
	{
		*(con + k) = *(cps1 + k);
		k++;
	}
	while (*(cps2 + l) != '\0')
	{
		*(con + k + l) = *(cps2 + l);
		l++;
	}
	*(con + k + l) = '\0';
	return (con);
}
