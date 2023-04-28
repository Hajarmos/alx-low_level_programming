#include "lists.h"

/**
 * free_list - frees linked list
 * @head: beginning of linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		temp = head;
		while (temp)
		{
			head = temp->next;
			free(temp->str);
			free(temp);
			temp = head;
		}
	}
}
