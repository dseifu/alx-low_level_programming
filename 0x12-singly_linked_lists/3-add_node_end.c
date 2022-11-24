#include "lists.h"

/**
 * add_node_end - add a node at last of linked list
 * @head: head node of the linked list
 * @str: a value for one element of the last node that is gonna be added
 *
 * Return: the added node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *last_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		if (str != NULL)
			new_node->len = strlen(str);
		new_node->next = NULL;
		if (*head == NULL)
			*head = new_node;
		else
		{
			last_node = (*head);
			while (last_node->next != NULL)
				last_node = last_node->next;
			last_node->next = new_node;
		}
	}
	return (new_node);
}
