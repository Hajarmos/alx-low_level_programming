#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head list
 * @idx: the index of the list where the new node should be added
 * Index starts at 0
 * @n: new node data
 * Returns: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp)
	{
		if (i + 1 == idx)
		{
			if (!temp->next)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			temp = new->next;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
