#include "main.h"


/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: n1
 * @m: n2
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new = n ^ m;
	int size, flipbits = 0;

	size = (sizeof(unsigned long int) * 8) - 1;
	while (size >= 0)
	{
		if ((new >> size) & 1)
			flipbits++;
		size--;
	}
	return (flipbits);
}
