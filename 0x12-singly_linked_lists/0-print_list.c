#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	const list_t *temp = h;

	for (; temp; temp = temp->next, n++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
	}
	return (n);
}
