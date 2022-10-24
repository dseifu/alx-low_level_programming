#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a given string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	char *str = s;
	int index = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		str[index] = s[i];
		index++;
	}
	s = str;
}
