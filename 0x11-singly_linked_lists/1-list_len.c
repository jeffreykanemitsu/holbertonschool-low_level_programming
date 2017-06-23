#include "lists.h"
/**
 * list_len - number of elements in a linked list_t list
 * @h: points to the list
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
