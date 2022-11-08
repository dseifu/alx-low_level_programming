#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: the size to allocte
 * @c: the character
 *
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size != 0 || p != NULL)
	{
		p[0] = c;
		return (p);
	}
	else
		return (NULL);
}
