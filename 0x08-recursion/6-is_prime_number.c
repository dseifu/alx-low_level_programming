#include "main.h"

/**
 * check_factors - check factors of a number
 * @f: factor to begin with
 * @n: the number
 *
 * Return: 1 if prime 0 if not
*/
int check_factors(int f, int n)
{
	if (n == f || n / 2 == f)
		return (1);
	if (n % f == 0)
		return (0);
	return (check_factors(f + 1, n));
}

/**
 * is_prime_number - Check if a number is prime or not
 * @n: the number
 *
 * Return: 1 if it is 0 if is not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_factors(2, n));
}
