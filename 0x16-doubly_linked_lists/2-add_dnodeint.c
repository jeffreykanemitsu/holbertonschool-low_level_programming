#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: head of list
 * @n: variable being changed
 *
 * Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head != NULL)
	{
		new_node->next = *head;
		new_node->next->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
