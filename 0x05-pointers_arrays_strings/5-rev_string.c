#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a given string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
