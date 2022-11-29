#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the head of the linked list
 * @index: the position
 *
 * Return: 1 for success -1 if not
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *nextnode;
	unsigned int c = 0;
	int is_deleted = -1;

	if (*head != NULL && index == 0)
	{
		*head = (*head)->next;
		free(node);
	}
	else
	{
		while (node != NULL)
		{
			if (index == c + 1)
			{
				nextnode = node->next;
				if (nextnode != NULL)
					node->next = nextnode->next;
				free(nextnode);
				is_deleted = 1;
				break;
			}
			node = node->next;
			c++;
		}
	}
	return (is_deleted);
}
