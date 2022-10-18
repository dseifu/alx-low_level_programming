#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: The number we get a last digit from
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	int lastdig;

	if (n < 0)
		n = n * -1;
	lastdig = n % 10;
	_putchar(lastdig + '0');
	return (lastdig);
}
