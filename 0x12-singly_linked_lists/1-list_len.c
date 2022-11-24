#include "lists.h"

/**
 * list_len - return the num of linked list
 * @h: the linked list
 *
 * Return: the num of the linked list
*/

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
