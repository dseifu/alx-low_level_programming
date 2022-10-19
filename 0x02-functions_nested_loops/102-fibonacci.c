#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0 to exit
 */
int main(void)
{
	int i;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 50; i++)
		fib[i] = fib[i - 2] + fib[i - 1];
	for (i = 0; i < 50; i++)
	{
		printf("%li", fib[i]);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
