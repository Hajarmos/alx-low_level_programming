#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: head list
 * @n: new node data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *head;
	if (temp)
		while ((temp->prev)
			temp = temp->prev;
	if (!temp)
	{
		*head = new;
		return (new);
	}
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (new);
}
