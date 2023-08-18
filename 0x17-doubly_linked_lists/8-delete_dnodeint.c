#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index index of a dlistint_t linked list
 * @head: list head
 * @index: the index of the node that should be deleted Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;

	if (temp)
		while (temp->prev)
			temp = temp->prev;

	while (temp)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				temp->prev->next = temp->next;
				if (temp->next)
					temp->next->prev = temp->prev;
			}

			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}

	return (-1);
}
