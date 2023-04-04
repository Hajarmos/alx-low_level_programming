#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: matrix
 * @size: size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, res1 = 0, res2 = 0;

	j = size - 1;

	for (i = 0; i < size; i++)
		res1 += a[i][i];
	for (i = 0; i < size; i++)
		res2 += a[i][j - i];
	printf("%d, %d", res1, res2);
}
