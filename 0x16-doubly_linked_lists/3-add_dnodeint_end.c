#include "lists.h"
/**
 * add_dnodeint_end - add new node at end of list
 * @head: head of list
 * @n: data variable being changed
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	for (current_node = *head; current_node->next != NULL; )
	{
		current_node = current_node->next;
	}
	new_node->prev = current_node;
	current_node->next = new_node;
	return (new_node);
}
