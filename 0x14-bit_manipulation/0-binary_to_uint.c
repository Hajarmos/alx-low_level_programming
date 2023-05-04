#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, to_decimal = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		to_decimal <<= 1;
		if (b[i] == '1')
			to_decimal |= 1;
		i++;
	}
	return (to_decimal);
}
