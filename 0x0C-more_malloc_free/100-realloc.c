#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the pointer
 * @old_size: the old size
 * @new_size: the new size
 *
 * Return: a pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;

	if (ptr == NULL)
		p = malloc(new_size);
	else if (new_size > old_size)
		p = realloc(ptr, new_size);
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0)
		free(ptr);
	return (p);
}
