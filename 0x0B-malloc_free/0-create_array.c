#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: pointer or NULL if size = 0 or it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
