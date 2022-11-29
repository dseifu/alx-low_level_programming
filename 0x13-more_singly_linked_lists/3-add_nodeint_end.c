#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: the head of the linked list
 * @n: element
 *
 * Return: the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *last = NULL;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
			*head = node;
		else
		{
			last = *head;
			while (last->next != NULL)
				last = last->next;
		last->next = node;
		}
	}
	return (node);
}
