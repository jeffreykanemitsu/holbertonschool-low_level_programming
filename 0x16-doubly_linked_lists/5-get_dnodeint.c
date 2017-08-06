#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of linked list
 * @head: head of list
 * @index: index of node, starting from 0
 *
 * Return: index of node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth;
	dlistint_t *current_node;

	current_node = head;
	for (nth = 0; nth < index; nth++)
	{
		if (current_node != NULL)
		{
			current_node = current_node->next;
		}
		else
		{
			return (NULL);
		}
	}
	if (current_node != NULL)
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}
}
