#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a given string's lenght chars
 * @str: the string
 */

void puts_half(char *str)
{
	long unsigned int i;
	long unsigned int l = strlen(str);
	long unsigned int hl;

	if (l % 2 == 0)
		hl = l / 2;
	else
		hl = l - 1 / 2;
	for (i = hl; i < l; i++)
		_putchar(str[i]);
	_putchar(10);
}
