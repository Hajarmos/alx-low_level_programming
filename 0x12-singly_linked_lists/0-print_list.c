#include "list.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t temp = h;

	if (!temp)
	{
		printf("empty list\n");
		return (0);
	}
	while (temp->next)
	{
		if (!temp->str)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		n++;
		temp = temp->next;
	}
	printf("[%d] %s\n", temp->len, temp->str);
	n++;
	free(temp);
	return (n);
}
