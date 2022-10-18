#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0 to exit
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; ; i++)
	{
		if ((3 * i) < 1024)
			sum = sum + (3 * i);
		else
			break;
	}
	for (i = 1; ; i++)
	{
		if ((5 * i) < 1024)
			sum = sum + (5 * i);
		else
			break;
	}
	printf("%i", sum);
	return (0);
}
