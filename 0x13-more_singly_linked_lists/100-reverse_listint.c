#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: first list's element
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *tempp = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = tempp;
		tempp = (*head);
		(*head) = temp;
	}
	*head = tempp;
	return (*head);
}
