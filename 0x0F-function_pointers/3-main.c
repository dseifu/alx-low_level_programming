#include <stdio.h>
#include "function_pointers.h"

/**
 * main - the entry point
 * @argc: arg count
 * @argv: args
 *
 * Return: 0 to exit
*/

int main(int argc, char **argv)
{
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
