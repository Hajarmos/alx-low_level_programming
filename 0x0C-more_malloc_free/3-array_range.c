#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min number
 * @max: max number
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *array, i = 0, n;

	if (min > max)
		return (NULL);
	if (min >= 0)
		n = max - min + 1;
	if (min < 0 && max < 0)
		n = (-min) - (-max) + 1;
	if (min < 0 && max > 0)
		n = -min + max + 1;
	array = malloc(sizeof(int) * n);
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
