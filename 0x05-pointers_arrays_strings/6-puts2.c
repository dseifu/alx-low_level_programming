#include "main.h"
#include <string.h>
/**
 * puts2 - print every other character of a string
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i = i + 2)
		_putchar(str[i]);
	_putchar(10);
}
