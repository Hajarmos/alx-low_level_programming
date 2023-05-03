#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: first element in list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *check;
	unsigned int i = 0, j, len;

	temp = *h;
	while (temp)
	{
		i++;
		temp = temp->next;
		check = *h;
		j = 0;
		while (j < i)
		{
			if (temp == check || !temp)
			{
				len = 0;
				while (len < i)
				{
					len++;
					temp = *h;
					*h = (*h)->next;
					free(temp);
				}
				*h = NULL;
				return (len);
			}
			check = check->next;
			j++;
		}
	}
	*h = NULL;
	return (i);
}
