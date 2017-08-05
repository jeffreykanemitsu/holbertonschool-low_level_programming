#include "lists.h"
/**
 * dlistint_len - shows the number of elements in a linked list
 * @h: points to list
 * Return: the number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
