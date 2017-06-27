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
