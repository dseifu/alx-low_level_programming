#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: arg count
 * @argv: args
 *
 * Return: 0 to exit or 1 or error
*/

int main(int argc, char **argv)
{
	int cents;
	int change = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(*(argv + 1));
	if (cents <= 0)
		printf("0\n");
	else
	{
		while (cents)
		{
			if (cents >= 25)
				cents = cents - 25;
			else if (cents >= 10)
				cents = cents - 10;
			else if (cents >= 5)
				cents = cents - 5;
			else if (cents >= 2)
				cents = cents - 2;
			else
				cents = cents - 1;
			change = change + 1;
		}
		printf("%d\n", change);
	}
	return (0);
}
