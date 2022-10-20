#include "main.h"

/**
 * more_numbers - print number 0-14 ten times
 */

void more_numbers(void)
{
	int i;
	int j;
	char n = "1234567891011121314";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
			_putchar(n[j]);
		_putchar(10);
	}
	_putchar(10);
}
