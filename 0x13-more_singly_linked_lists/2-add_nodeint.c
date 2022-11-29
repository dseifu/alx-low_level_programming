#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a linked list
 * @head: the head of the linked list
 * @n:element
 *
 * Return: the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return (node);
}
