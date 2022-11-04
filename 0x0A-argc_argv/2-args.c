#include <stdio.h>

/**
 * main - the entry point
 * @argc: count to args
 * @argv: the args
 *
 * Return: 0 to exit
*/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
