#include "main.h"
#include <string.h>

/**
 * leet - encode a string to 1337
 * @s: the string to encoded
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *s)
{
	char rep[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 20; j = j + 2)
		{
			if (s[i] == rep[j])
				s[i] = rep[j + 1];
		}
	}
	return (s);
}
