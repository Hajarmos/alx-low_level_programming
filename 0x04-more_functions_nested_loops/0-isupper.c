#include "main.h"

/**
 * _isupper - checks if input is uppercase
 * @c: input number
 *
 * Return: 1 if upper, 0 if not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
