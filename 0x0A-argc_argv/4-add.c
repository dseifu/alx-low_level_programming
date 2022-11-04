#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the entry point
 * @argc: count to arg
 * @argv: the args
 *
 * Return: 0 to exit 1 on error
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int dv;
	int l;
	char *argi;

	argv++;
	argc--;
	while (argc--)
	{
		dv = atoi(*argv);
		if (dv == 0)
		{
			argi = *argv;
			l = strlen(argi);
			if (l > 1 || argi[0] != 48)
			{
				printf("Error\n");
				return (1);
			}
		}
		else
			sum = sum + dv;
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
