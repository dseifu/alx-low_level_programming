#include <stdio.h>

/**
 * main - the entry point
 * @argc: arg count
 * @argv: the args
 *
 * Return: 0 to exit
*/

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s", *argv++);
	}
	printf("\n");
	return (0);
}
