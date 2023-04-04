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
	int i, res1 = 0, res2 = 0, p;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		res1 += *(a + p);
	}
	for (i = 0; i < size; i++)
	{
		p = (i * size) + (size - 1 - i);
		res2 += *(a + p);
	}
	printf("%d, %d", res1, res2);
}
