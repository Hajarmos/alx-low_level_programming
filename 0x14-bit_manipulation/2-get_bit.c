#include "main.h"


/**
 * get_bit - return the value of a bit at a given index
 * @n: input number
 * @index: index of bit
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
