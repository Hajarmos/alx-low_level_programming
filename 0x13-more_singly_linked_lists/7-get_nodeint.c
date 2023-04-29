#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: list's head
 * @index: the index of the node, starting at 0
 * Return: nth of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (i == index)
		return (temp);
	else
		return (NULL);
}
