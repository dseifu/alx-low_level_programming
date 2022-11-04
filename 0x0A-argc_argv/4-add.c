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
	int j;

	argv++;
	argc--;
	while (argc--)
	{
		argi = *argv;
		l = strlen(argi);
		for (j = 0; j < l; j++)
			if (argi[j] < 48 || argi[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		dv = atoi(*argv);
		sum = sum + dv;
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
