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
	unsigned int i;
	char *p;

	if (size != 0)
	{
		p = malloc(sizeof(char) * size);
		if (p != NULL)
		{
			for (i = 0; i < size; i++)
				p[i] = c;
			return (p);
		}
	}
	return (NULL);
}
