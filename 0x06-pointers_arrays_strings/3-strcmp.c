#include "main.h"

/**
 * _strcmp- compares two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if its same
 * number negative if s1<s2
 * number positive if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
