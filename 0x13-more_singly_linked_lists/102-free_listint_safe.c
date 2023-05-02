#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: first element in list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *check, *head;
	unsigned int i = 0, j;

	head = *h;
	while (*h)
	{
		check = head;
		j = 0;
		while (j <= i)
		{
			if ((*h)->next == check)
				(*h)->next = NULL;
			check = check->next;
			j++;
		}
		temp = *h;
		*h = (*h)->next;
		free(temp);
		i++;
	}
	return (i);
}
