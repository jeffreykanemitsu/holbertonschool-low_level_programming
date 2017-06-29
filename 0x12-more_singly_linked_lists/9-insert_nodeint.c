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
/**
 * add_nodeint - adds a new node at beginning of linked list
 * @head: head of list
 * @n: value being stored in new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: head of list
 * @idx: index
 * @n: value being inserted to list
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	listint_t *pnode;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (NULL);
	}
	pnode = get_nodeint_at_index(*head, idx - 1);
	pnode = new_node->next;
	temp = pnode->next;
	pnode->next = new_node;
	pnode->n = n;
	new_node = temp;
	return (new_node);
}
