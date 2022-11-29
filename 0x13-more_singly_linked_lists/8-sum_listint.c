#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a linked list
 * @head: the head of the linked list
 *
 * Return: the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
