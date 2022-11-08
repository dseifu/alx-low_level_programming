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
	int l1 = 0;
	int l2 = 0;
	int l3 = 0;
	int ms1;
	int ms2;
	int ms3;

	if (s1 != NULL)
		l1 = strlen(s1);
	if (s2 != NULL)
		l2 = strlen(s2);
	ms1 = sizeof(char) * l1;
	ms2 = sizeof(char) * l2;
	ms3 = sizeof(char) * 1;
	p = malloc(ms1 + ms2 + ms3);
	if (p != NULL)
	{
		for (i = 0; i < l1; i++)
		{
			p[l3] = s1[i];
			l3++;
		}
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
