#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes in s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	int i = 0, j = 0, k = 0, l = 0, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (n >= j)
		n = j;
	b = i + n + 1;
	con = malloc(sizeof(char) * b);
	if (con == NULL)
		return (NULL);
	while (*(s1 + k))
	{
		*(con + k) = *(s1 + k);
		k++;
	}
	while (*(s2 + l) && n)
	{
		*(con + k + l) = *(s2 + l);
		l++, n--;
	}
	*(con + k + l) = '\0';
	return (con);
}
