#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *, which contains a copy of the string given as a parameter.
 * @str: the new string
 *
 * Return: a pointer
*/

char *_strdup(char *str)
{
	char *p;
	int i;
	int l;

	if (str != NULL)
	{
		l = strlen(str);
		p = malloc(sizeof(char) * l);
		if (p != NULL)
		{
			for (i = 0; i < l; i++)
				p[i] = str[i];
			return (p);
		}
	}
	return (NULL);
}
