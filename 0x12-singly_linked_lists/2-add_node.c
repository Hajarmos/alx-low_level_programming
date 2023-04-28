#include "lists.h"


/**
 * add_node - adds new node to beginning of linked list
 * @head: beginning of linked list
 * @str: new string to be added to link list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;

	while (*(str + i))
		i++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
