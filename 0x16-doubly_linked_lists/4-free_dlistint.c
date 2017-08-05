#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: points to head of list
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_dlistint(head->next);
	free(head);
}
