#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
*/

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s = s + 1;
		_print_rev_recursion(s);
		s = s - 1;
		_putchar(s[0]);
	}
}
