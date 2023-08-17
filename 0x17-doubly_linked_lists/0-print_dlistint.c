#include "lists.h"



/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int cont = 0;

	if (!h)
		return (cont);
	if (!h->prev && !h->next)
	{
		printf("%d\n", h->n);
		return (1);
	}
	while (h->prev)
		h = h->prev;
	while (h)
	{
		cont++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cont);
}
