#include <stdio.h>
#include <stdlib.h>
#include "bootcamp.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid
 * @height: height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
