#include "main.h"

/**
 * print_triangle - print a triangle of given number size using #
 * @size: the size of the triangle to be printed
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int sp;

	sp = size - 1;
	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < sp; j++)
				_putchar(' ');
			for (k = sp; k < size; k++)
				_putchar('#');
			--sp;
			_putchar(10);
		}
	}
}
