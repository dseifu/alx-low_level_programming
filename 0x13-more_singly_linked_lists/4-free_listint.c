#include "lists.h"

/**
 * free_listint - free the memory taken by a linked list
 * @head: the head of the linked list
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
