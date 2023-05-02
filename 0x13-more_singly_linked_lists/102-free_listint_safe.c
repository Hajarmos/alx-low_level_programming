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
	temp = *h;
	while (temp)
	{
		i++;
		*h = temp->next;
		free(temp);
		temp = *h;
		check = head;
		j = 0;
		while (j < i)
		{
			if (*h == check)
			{
				free(temp);
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
