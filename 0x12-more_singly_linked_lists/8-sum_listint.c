#include "lists.h"
/**
 * sum_listint - adds the sum of all data in listint_t
 * @head: head of linked list
 *
 * Return: sum of all data of listint_t or if list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current_node;

	current_node = head;
	for (sum = 0; current_node != NULL; current_node = current_node->next)
	{
		sum += current_node->n;
	}
	return (sum);
}
