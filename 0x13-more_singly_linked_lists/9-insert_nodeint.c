#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head of the linked list
 * @idx: the index of the list where the new node should be added
 * @n: the position
 *
 * Return: the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL;
	listint_t *ith_node = *head;
	unsigned int c = 0;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		if (idx == 0)
		{
			node->next = *head;
			*head = node;
		}
		else
		{
			while (ith_node != NULL && c < idx)
			{
				if (idx == c + 1)
				{
					node->next = ith_node->next;
					ith_node->next = node;
					break;
				}
				ith_node = ith_node->next;
				c++;
			}
		}
	}
	return (node);
}
