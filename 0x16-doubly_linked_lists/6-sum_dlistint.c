#include "lists.h"
/**
 * sum_dlistint - adds the sum of all data in dlistint_t
 * @head: head of linked list
 *
 * Return: sum of all data of dlistint_t or if list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; )
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
