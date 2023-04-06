#include "main.h"

/**
 * check - checks for the natural square root of a number
 * @a: the vertual natural square root of n
 * @b: number
 *
 * Return: the natural square root of a number
 */

int check(int a, int b)
{
	if (a * a < b)
		check(a + 1, b);
	else if (a * a == b)
		return (a);
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (check(1, n));
}
