#include "lists.h"
/**
 * add_dnodeint_end - adds new node at end of linked list
 * @head: head of list
 * @n: variable being changed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *current_node;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	if (current_node != NULL)
	{
		current_node->next = end_node;
		end_node->prev = current_node;
	}
	else
	{
		*head = end_node;
	}
	return (end_node);
}
}
