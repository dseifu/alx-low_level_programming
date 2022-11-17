#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator bn strings
 * @n: the num of args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap, save;

	if (separator != NULL)
	{
		va_start(ap, n);
		va_start(save, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap, char *) != NULL)
				printf("%s", va_arg(save, char *));
			else
			{
				printf("(nil)");
				va_arg(save, char *);
			}
			if (i != n - 1)
				printf("%s", separator);
		}
		va_end(ap);
		va_end(save);
	}
	printf("\n");
}
