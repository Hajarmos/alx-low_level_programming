#include "main.h"

/**
 * clear_bit - sets 0 of bit at a given index
 * @n: input number
 * @index: bit index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	bit <<= index;
	*n &= ~bit;
	return (1);
}
