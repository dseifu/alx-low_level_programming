#include <stdio.h>
/**
 * fibo - calulate the nth Fibonacci number in Fibonacci numbers
 * @n: The nth number in Fibonacci numbers
 *
 * Return: The value of the nth Fibonacci number
 */
long long fibo(int n)
{
	if (n == 1)
		return (1);
	if (n == 2)
		return (2);
	if (n > 2)
		return (fibo(n - 2) + fibo(n - 1));
}
/**
 * main - the entry point
 *
 * Return: 0 to exit
 */
int main(void)
{
	int i;

	for (i = 1; i <= 98; i++)
	{
		printf("%lli", fibo(i));
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
