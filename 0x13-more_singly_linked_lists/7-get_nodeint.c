#include "lists.h"

/**
 * get_nodeint_at_index - find nth node of a linked list
 * @head: the head of the linked list
 * @index: position of the node
 *
 * Return: nth node a linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
		{
			node = head;
			break;
		}
		head = head->next;
		c++;
	}
	return (node);
}
