#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of linked list
 * @head: head of list
 * @n: value stored in node
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node;
	listint_t *new_node;

	
