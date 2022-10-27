#include "main.h"

/**
 * print_number - print number
 * @n: the number
 */

void print_number(int n)
{
	int dp = 1;
	float f;
	int lc = 1;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}
		f = n;
		while (lc)
		{
			if ((n / dp) < 10)
				lc = 0;
			else
				dp = dp * 10;
		}
		while (dp > 0)
		{
			if (f > 1)
			{
				f = f / dp;
				n = f;
				dp = dp / 10;
			}
			else
			{
				f = f * 10;
				n = f;
				dp = dp / 10;
			}
			_putchar(n + '0');
			f = f - n;
		}
	}
}
