#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return: a pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	char *p;
	unsigned int i;

	if (s1 != NULL)
		l1 = strlen(s1);
	if (s2 != NULL)
		l2 = strlen(s2);
	if (n < l2)
		l2 = n;
	p = malloc((l1 + l2 + 1) * sizeof(char));
	if (p != NULL)
	{
		for (i = 0; i < l1; i++)
			p[i] = s1[i];
		for (i = 0; i < l2; i++)
			p[l1 + i] = s2[i];
		p[l1 + i] = '\0';
	}
	return (p);
}
