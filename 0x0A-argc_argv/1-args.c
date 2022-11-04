#include <stdio.h>

/**
 * main - the entry point
 * @argc: number of args
 * @argv: the args
 *
 * Return: 0 to exit
*/

int main(int argc, char **argv)
{
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}
