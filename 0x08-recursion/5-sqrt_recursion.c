#include "main.h"

/**
 * _square_recursion - find square root of a number by squaring numbers
 * @s: numbers to square
 * @n: the number to that we are in need of finding the square root
 *
 * Return: the number
*/

int _square_recursion(int s, int n)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (_square_recursion(s + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the suare root
*/

int _sqrt_recursion(int n)
{
	return (_square_recursion(0, n));
}
