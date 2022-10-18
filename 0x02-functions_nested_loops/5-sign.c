#incude "main.h"
/**
 * print_sign - print + for positive numbers - for negative and 0 for zero
 * @n: The number to checked
 *
 * Return: 1 for positive numbers -1 for negative numbers and 0 for 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
