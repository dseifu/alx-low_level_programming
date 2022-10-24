#include "main.h"

/**
 * swap_int - swap the value of a given two numbers
 * @a: the first number
 *@b: the seconde number
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
