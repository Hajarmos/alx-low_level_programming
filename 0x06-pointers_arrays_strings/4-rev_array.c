#include "main.h"

/**
 * reverse_array- reverses the content of an array of integers.
 * @a: array of integers
 * @n: the elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, b, c;

	b = n - 1;
	while (i < b)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
		i++;
		b--;
	}
}
