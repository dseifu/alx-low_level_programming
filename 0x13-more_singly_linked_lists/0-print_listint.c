#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: the linked list
 *
 * Return: the size
*/
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
