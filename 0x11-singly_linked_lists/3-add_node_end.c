#include "lists.h"
/**
 * add_node_end - adds a new node at the end of list
 * @head: head of list
 * @str: string
 *
 * Return: address of the new element, or null if fialed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *node;
	int x;

	for (x = 0; str[x]; x++)
	{
		;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = x;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new_node;
	}
	return (new_node);
}
