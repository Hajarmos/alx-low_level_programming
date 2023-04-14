#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *all;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	all = malloc(size * nmemb);
	if (all == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		*(all + i) = 0;
	return ((void *)all);
}
