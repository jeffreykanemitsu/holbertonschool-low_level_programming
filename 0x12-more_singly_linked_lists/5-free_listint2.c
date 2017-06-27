#include "lists.h"
/**
 * free_listint2 - frees listint_t list
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			node = *head;
			*head = (*head)->next;
			free(node);
		}
	}
}
