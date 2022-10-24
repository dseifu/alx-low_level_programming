#include "main.h"

/**
 * print_rev - print a given string in reverse order
 * @s: the string
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s)-1; i >= 0; i--)
		_putchar(s[i]);
}
