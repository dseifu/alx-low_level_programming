#include "main.h"

/**
 * print_square - print a square of the give size using #
 * @size: the size of the square to be printed
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar(10);
		}
		_putchar(10);
	}
}
