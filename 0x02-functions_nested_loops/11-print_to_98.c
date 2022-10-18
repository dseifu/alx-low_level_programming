#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print from a given number to 98
 * @n: The number to begin printing from
 */
void print_to_98(int n)
{
	do {
		printf("%i", n);
		if (n != 98)
			printf(", ");
		n = n + 1;
	} while (n <= 98);
}
