#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the head of the linked list
 *
 * Return: head's n
*/

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *node;

	if (*head != NULL)
	{
		n = (*head)->n;
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	return (n);
}
