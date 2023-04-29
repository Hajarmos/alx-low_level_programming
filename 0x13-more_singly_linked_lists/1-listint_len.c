#include "lists.h"

/**
 * listint_len - Count the number of items in the list
 * @h: the head of the list
 * Return:  the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int len;

	temp = h;
	for (len = 0; temp; temp = temp->next, len++)
		;
	return (len);
}
