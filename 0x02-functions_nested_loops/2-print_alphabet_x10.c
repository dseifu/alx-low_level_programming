#include "main.h"
/**
 * print_alphabet_x10 - print all letters in lower case 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			for (j = 0; j < 26; j++)
			{
				_putchar(alp[j]);
			}
		}
		_putchar(10);
	}
}
