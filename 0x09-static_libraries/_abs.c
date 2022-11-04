#include "main.h"
/**
 * _abs - find the absolute value of an integer
 * @n: The integer to be cheked
 *
 * Return: The absolute value of the given integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
