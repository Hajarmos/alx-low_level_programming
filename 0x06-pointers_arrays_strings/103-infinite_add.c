#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size * Return: address of r or 0
 *Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l, m, n;

	while (*(n1 + 1))
		i++;
	while (*(n2 + 1))
		j++;
	if (i > size_r || j > size_r)
		return (0);
	for (i -= 1, j -= 1, k = 0; k < (size_r - 1); i--, j--, k++)
	{
		 n = m;
		if (j >= 0)
			n += n2[j] - '0';
		if (i >= 0)
			n += n1[i] - '0';
		if (i < 0 && j < 0 && n == 0)
			break;
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
