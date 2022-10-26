#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings at most n bytes
 * @src: the first string
 * @dest: the second string
 * @n: the number of bytes to be concatenated
 *
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = strlen(src);
	char c;
	char *cadd;

	if (n < l)
	{
		for (i = 0; i < n; i++)
		{
			c = *(src + i);
			cadd = &c;
			strcat(dest, cadd);
		}
	}
	else
		strcat(dest, src);
	return (dest);
}
