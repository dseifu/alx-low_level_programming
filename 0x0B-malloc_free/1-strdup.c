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
	int l = strlen(str);

	if (str != NULL)
	{
		p = malloc(sizeof(*str));
		for (i = 0; i < l; i++)
			p[i] = str[i];
		return (p);
	}
	else
		return (NULL);
}
