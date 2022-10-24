#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a given string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
		_putchar(s[i]);
	_putchar(10);

	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
