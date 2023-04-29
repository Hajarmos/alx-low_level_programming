#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list's head
 * @idx: new node index
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 1;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
		new_node->n = n;
		if (!*head && idx)
			return (NULL);
		if (!idx)
		{
			new_node->next = *head;
			*head = new_node;
		}
		else
		{
			temp = *head;
			while (temp->next && i < idx)
			{
				temp = temp->next;
				i++;
			}
			if (i == idx && temp->next)
			{
				new_node->next = temp->next;
				temp->next = new_node;
			}
			else if (i == idx && !temp->next)
				new_node = add_nodeint_end(head, n);
			else
				return (NULL);
		}
	}
	else
		return (NULL);
	return (new_node);
}
