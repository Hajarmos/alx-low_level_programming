#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: first list's element
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *check;
	unsigned int i = 0, j;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		i++;
		temp = temp->next;
		check = head;
		j = 0;
		while (j < i)
		{
			if (temp == check)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (i);
			}
			check = check->next;
			j++;
		}
	}
	return (i);
}
