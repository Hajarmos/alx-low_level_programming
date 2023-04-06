#include "main.h"

/**
 * check - checks for the natural square root of a number
 * @a: the vertual natural square root of n
 * @n: number
 *
 * Return: the natural square root of a number
 */

int check(int a, int n)
{
	if (a * a < n)
		check(a + 1, n);
	else if (a * a == n)
		return (n);
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
	return (check(1, n));
}
