#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0 to exit
 */
int main(void)
{
	int i;
	long int sum;
	int fib[32];

	sum = 0;
	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 32; i++)
		fib[i] = fib[i - 2] + fib[i - 1];
	for (i = 0; i < 32; i++)
	{
		if (fib[i] % 2 == 0)
			sum = sum + fib[i];
	}
	printf("%li\n", sum);
	return (0);
}
