#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	char **grid;
	int i, j;

	*grid = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));
	return (grid);
}
