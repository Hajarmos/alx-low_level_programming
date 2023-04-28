#include "lists.h"


/**
 * add_node_end - adds new node to end of linked list
 * @head: beginning of linked list
 * @str: new string to be added to linked list
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	unsigned int i;

	while (*(str + i))
		i++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
