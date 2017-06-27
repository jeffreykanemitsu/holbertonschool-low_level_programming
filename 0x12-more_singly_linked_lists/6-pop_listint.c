#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t
 * @head: head of linked list
 *
 * Return: the head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t node;

	if (*head == NULL)
	{
		return (0);
	}
	node = *head;
	data = node->n;
	*head = node->next;
	free(node);
	return (data);
}
