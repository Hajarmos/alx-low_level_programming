#include "main.h"

/**
 * set_bit - sets bit of index to 1
 * @n: input number
 * @index: index of bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	bit = 1;
	bit <<= index;
	*n |= bit;
	return (1);
}
