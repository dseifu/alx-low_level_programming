#include "lists.h"

/**
 * add_node -adding a new node to the head of a linked list
 * @head: the head of the linked list
 * @str: the value of one of elements of the newly added node
 *
 * Return: the added node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		if (str != NULL)
			new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
