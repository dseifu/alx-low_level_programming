#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int l3 = 0;

	p = malloc(sizeof(s1) + sizeof(s2) + 1);

	if (p != NULL)
	{
		if (s1 != NULL)
			for (i = 0; i < l1; i++)
			{
				p[l3] = s1[i];
				l3++;
			}
		if (s2 != NULL)
			for (i = 0; i < l2; i++)
			{
				p[l3] = s2[i];
				l3++;
			}
		p[l3] = '\0';
		return (p);
	}
	else
		return (NULL);
}
