#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: first list's element
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *tempp;
	unsigned int i = 1;

	temp = (*head);
	if (!*head)
		return (-1);
	if (!index)
	{
		tempp = (*head);
		(*head) = temp->next;
		free(temp);
		return (1);
	}
	while (temp->next && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (i == index && temp->next)
	{
		tempp = temp->next;
		temp->next = tempp->next;
		free(tempp);
		return (1);
	}
	else
		return (-1);
}
