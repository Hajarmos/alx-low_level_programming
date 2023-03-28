#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @array: array
 * @n: number of elements of the array to be printed
 * Return: 0 is success
 */
void print_array(int *array, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (a != n - 1)
			printf("%d, ", array[a]);
		else
			printf("%d", array[a]);
	}
	printf("\n");

}
