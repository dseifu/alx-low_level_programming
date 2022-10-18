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

	lastdig = n % 10;
	if (lastdig < 0)
		lastdig = lastdig * -1;
	_putchar(lastdig + '0');
	return (lastdig);
}
