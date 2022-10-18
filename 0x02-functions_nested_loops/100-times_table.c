#include "main.h"
/**
 * write_digits - print the digits of a multiplication of two numbers whose
 * result is greater than 10
 * @mul: The number, which is the result of the multiplication of two numbers
 */
void write_digits(int mul)
{
	int i;
	int rem;
	int quo;
	int nofdig;
	int index;
	int digits3[3];
	int digits2[2];

	do {
		quo = mul / 10;
		++nofdig;
	} while (quo != 0);
	for (index = 0; index < nofdig; index++)
	{
		rem = mul % 10;
		mul = mul / 10;
		if (nofdig == 3)
			digits3[index] = rem;
		else
			digits2[index] = rem;
	}
	for (i = nofdig - 1; i >= 0; i--)
	{
		if (nofdig == 3)
			_putchar('0' + digits3[i]);
		else
			_putchar('0' + digits2[i]);
	}
}

/**
 * print_times_table - printing a time table give a number
 * @n: The number we prepare a time table for
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int col;
		int row;
		int mul;

		for (col = 0; col <= n; col++)
		{
			for (row = 0; row <= n; row++)
			{
				mul = col * row;
				if (mul >= 10)
					write_digits(mul);
				else
					_putchar('0' + mul);
				if (row != n)
				{
					_putchar(',');
					_putchar(' ');
					if ((col * (row + 1)) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if ((col * (row + 1)) < 100)
						_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
}
