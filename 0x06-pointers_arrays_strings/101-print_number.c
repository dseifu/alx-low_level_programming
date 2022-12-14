#include "main.h"

/**
 * print_number - print number
 * @n: the number
 */

void print_number(int n)
{
	int dp = 1;
	int lc = 1;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
			_putchar(45);
		while (lc)
		{
			if (n < 0)
				if ((n / dp) > -10)
					lc = 0;
				else
					dp = dp * 10;
			else
				if ((n / dp) < 10)
					lc = 0;
				else
					dp = dp * 10;
		}
		while (dp > 0)
		{
			if (n < 0)
			{
				_putchar((-(n / dp)) + '0');
				n = -(n % dp);
			}
			else
			{
				_putchar((n / dp) + '0');
				n = n % dp;
			}
			dp = dp / 10;
		}
	}
}
