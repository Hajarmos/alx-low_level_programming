#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: list's head
 * Return: sum list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int sum = 0;

	temp = head;
	for (; temp; temp = temp->next)
		sum += temp->n;
	return (sum);
}
