#include "lists.h"

/**
 * sum_dlistint - Calcul the sum of all the data (n) of a dlistint_t linked list
 * @head: list head
 * Return: the sum of all the data
 * or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	while (head->prev)
		head = head->prev;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
