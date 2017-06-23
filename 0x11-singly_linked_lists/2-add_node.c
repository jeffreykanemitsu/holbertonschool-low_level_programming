#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: double pointer to the head of the list
 * @str: string
 *
 * Return: address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int x;
	list_t *new_node;

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
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = x;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
