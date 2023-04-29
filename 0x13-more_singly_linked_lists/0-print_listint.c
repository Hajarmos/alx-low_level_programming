#include "lists.h"


/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the first element of list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; temp = temp->next, i++)
		printf("%d\n", temp->n);
	return (i);
}
