#include "main.h"
/**
 * print_alphabet - print all letters, lowercase
 */
void print_alphabet(void)
{
	int i;
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
}
