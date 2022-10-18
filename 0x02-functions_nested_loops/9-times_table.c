#include "main.h"
/**
 * write_digits - print the digits of a multiplication of two numbers whose
 * result is greater than 10
 * @mul: The number, which is the result of the multiplication of two numbers
 */
void write_digits(int mul)
{
	int index;
	int rem;
	int digits[];
	int size;

	rem = mul % 10;
	mul = mul / 10;
	index = 0;
	digits[index] = rem;
	index++;
	while (mul > 0)
	{
		rem = mul % 10;
		mul = mul / 10;
		digits[index] = rem;
		index++;
	}
	size = sizeof(digits) / sizeof(digits[0]);
	for (i = size - 1; i >= 0; i--)
	{
		_putchar('0' + digits[i]);
	}
}
/**
 * times_table - printing a time table from 0 to 9
 */
void times_table(void)
{
	int i;
	int col;
	int row;
	int mul;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 10; row++)
		{
			mul = col * row;
			if (mul >= 10)
				write_digits(mul);
			else
				_putchar('0' + mul);
			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
