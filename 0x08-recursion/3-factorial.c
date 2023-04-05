#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: number
 *
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
