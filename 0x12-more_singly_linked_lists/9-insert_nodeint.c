#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list
 * @h: points to head of list
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
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
	listint_t *pnode;
	size_t list_len;

	list_len = listint_len(*head);
	if (head == NULL)
	{
		return (NULL);
	}
	else if (list_len < idx)
	{
		return (NULL);
	}
	else if (idx == 0 and *head != NULL)
	{
		new_node = add_nodeint(head, n);
	}
	else if (idx == list_len)
	{
		new_node = add_nodeint_end(head, n);
		return (new_node);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	pnode = get_nodeint_at_index(*head, idx - 1);
	new_node->next = pnode->next;
	new_node->n = n;
	return (new_node);
}
