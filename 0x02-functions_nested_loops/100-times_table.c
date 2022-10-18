#include "main.h"
/**
 * write_2digits - print the digits of a multiplication of two numbers whose
 * result is greater than 10 and less than 100
 * @mul: The number, which is the result of the multiplication of two numbers
 */
void write_2digits(int mul)
{
	int i;
	int rem;
	int index;
	int digits[2];

	for (index = 0; index < 2; index++)
	{
		rem = mul % 10;
		mul = mul / 10;
		digits[index] = rem;
	}
	for (i = 1; i >= 0; i--)
		_putchar('0' + digits[i]);
}
/**
 * write_3digits - print the digits of a multiplication of two numbers whose
 * result is greater than 100
 * @mul: The number, which is the result of the multiplication of two numbers
 */
void write_3digits(int mul)
{
	int i;
	int rem;
	int index;
	int digits[3];

	for (index = 0; index < 3; index++)
	{
		rem = mul % 10;
		mul = mul / 10;
		digits[index] = rem;
	}
	for (i = 2; i >= 0; i--)
		_putchar('0' + digits[i]);
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
				if (mul >= 10 && mul < 100)
					write_2digits(mul);
				else if (mul >= 100)
					write_3digits(mul);
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
