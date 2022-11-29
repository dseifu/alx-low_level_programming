#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: the size
*/

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
