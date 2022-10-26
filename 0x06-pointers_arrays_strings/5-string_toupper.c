#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - change the letters of a given string to capital letters
 * @s: the string
 *
 * Return: the pointer to the changed string
 */

char *string_toupper(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
		s[i] = toupper(s[i]);
	return (s);
}
