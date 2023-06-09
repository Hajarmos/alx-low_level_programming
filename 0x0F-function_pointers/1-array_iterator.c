#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to the function we need to use
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!size || !action || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
