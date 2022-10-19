#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0 to exit
 */
int main(void)
{
	int i;
	double fib[98];

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 98; i++)
		fib[i] = fib[i - 2] + fib[i - 1];
	for (i = 0; i < 98; i++)
	{
		printf("%ll", (long long)fib[i]);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
