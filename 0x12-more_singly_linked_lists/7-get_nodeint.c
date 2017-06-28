#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: head of linked list
 * @index: index of the node, starting at 0
 *
 * Return: nth node of listint_t or if node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current_node;

	current_node = head;
	for (count = 0; count < index; count++)
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
