#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (!temp->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		n++;
		temp = temp->next;
	}
	return (n);
}
