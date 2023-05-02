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

	if (!*h)
		exit(98);
	head = *h;
	while (*h)
	{
		temp = *h;
		i++;
		*h = temp->next;
		free(temp);
		check = head;
		j = 0;
		while (j < i)
		{
			if (*h == check)
			{
				*h = NULL;
				return (i);
			}
			check = check->next;
			j++;
		}
	}
	*h = NULL;
	return (i);
}
