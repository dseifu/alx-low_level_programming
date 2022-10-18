#include "main.h"
/**
 * jack_bauer - print every minute of 24 hour
 */
void jack_bauer(void)
{
	int n1d1;
	int n1d2;
	int n2d1;
	int n2d2;

	for (n1d1 = 48; n1d1 < 51; n1d1++)
	{
		for (n1d2 = 48; n1d2 < 58; n1d2++)
		{
			if (n1d1 == 50 && n1d2 > 51)
				break;
			for (n2d1 = 48; n2d1 < 54; n2d1++)
			{
				for (n2d2 = 48; n2d2 < 58; n2d2++)
				{
					_putchar(n1d1);
					_putchar(n1d2);
					_putchar(':');
					_putchar(n2d1);
					_putchar(n2d2);
					_putchar(10);
				}
			}
		}
	}
}
