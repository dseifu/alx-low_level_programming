#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac:argument count
 * @av: the args
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int cac = ac;
	char **cav = av;
	int s = 0;
	char *p = NULL;
	int i;
	int sp = 0;

	if (ac - 1 != 0 && av != NULL)
	{
		while (--cac)
			s = s + strlen(*cav++) + 1;
		s = s + 1;
		p = malloc(sizeof(char) * s);
		if (p != NULL)
		{
			for (i = 0; i < ac; i++)
			{
				for (cac = 0; av[i][cac] != '\0'; cac++)
					p[sp++] = av[i][cac];
				p[sp++] = '\n';
			}
			p[sp] = '\0';
		}
	}
	return (p);
}
