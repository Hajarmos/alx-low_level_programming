#include "lists.h"


/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head list
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cont = 0;

	if (!h)
		return (0);
	if (!h->prev && !h->next)
		return (1);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
