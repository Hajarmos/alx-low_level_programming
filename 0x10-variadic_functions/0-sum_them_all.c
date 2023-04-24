#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, sum = 0;

	va_start(ls, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ls, int);
	va_end(ls);
	return (sum);
}
