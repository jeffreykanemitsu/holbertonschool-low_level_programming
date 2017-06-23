#include "lists.h"
/**
 * print_list - prints all elements of list_t list
 * @h: linked list that needs to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
