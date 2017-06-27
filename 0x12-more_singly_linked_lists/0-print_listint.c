#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: linked list
 * Return: all elements of listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
