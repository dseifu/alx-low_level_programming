#include "main.h"

/**
 * print_line - print a line using _ given number times
 * @n: the number of times the line will printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar(10);
	}
}
