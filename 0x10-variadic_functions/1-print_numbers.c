#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the separator used between the nums
 * @n: the num of args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
	}
}
