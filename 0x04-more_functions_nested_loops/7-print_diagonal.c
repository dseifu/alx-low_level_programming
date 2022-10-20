#include "main.h"

/**
 * print_diagonal - print a digonal line using \ given number times
 * @n: The number of times the digonal line is printed
 */

void print_diagonal(int n)
{
	int i;
	int sp;
	int j;

	sp = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < sp; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			sp++;
		}
	}
}
