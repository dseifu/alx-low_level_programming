#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: byte size
 *
 * Return: void pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb > 0 && size > 0)
	{
		p = calloc(nmemb, size);
	}
	return (p);
}
