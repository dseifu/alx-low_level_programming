#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * multiply - multiply two digits
 * @l1: length1
 * @l2: lenght2
 * @av: the args
 * @p: the allocated pointer
*/

void multiply(unsigned int l1, unsigned int l2, **av, *p)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int dmul;
	unsigned int lo;
	unsigned int pic = 0;

	for (i = l1 - 1; i >= 0; i--)
		for (j = l2 - 1; j >= 0; j--)
		{
			dmul = atoi(&av[1][i]) * atoi(&av[2][j]);
			if (dmul > 10)
			{
			}
			else
			{
				p[pic] = atoi(&p[pic]) + dmul;
				pic++;
			}
		}
}

/**
 * is_the_arg_digit - check the arg is a digit
 * @arg: the arg
 *
 * Return: 1 it is a digit 0 if not
*/

int is_the_arg_digit(char *arg)
{
	int i;

	for (i = 0; arg[i] != '\0'; i++)
		if (isdigit(arg[i]))
			continue;
		else
			return (0);
	return (1);
}

/**
 * mul_two_pos_nums - multiply two poitive numbers
 * @ac: arg count
 * @av: the args
*/

void mul_two_pos_nums(int ac, char **av)
{
	int a1;
	int a2;
	unsigned int l1;
	unsigned int l2;
	char *p;
	unsigned int psize;
	unsigned int i;

	if (ac == 3)
	{
		int a1 = is_the_arg_digit(av[1]);
		int a2 = is_the_arg_digit(av[2]);

		if (a1 && a2)
		{
			l1 = strlen(av[1]);
			l2 = strlen(av[2]);
			psize = sizeof(char) * (l1 + l2);
			p = malloc(psize);
			if (p != NULL)
			{
				for (i = 0; i < psize; i++)
					p[i] = '0';
				multiply(l1, l2, av, p);
			}
		}
	}
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
