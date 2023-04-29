#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: first element of list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head)
	{
		temp = *head;
		while (temp)
		{
			*head = temp->next;
			free(temp);
			temp = *head;
		}
		free(temp);
		head = NULL;
	}
}
