#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0 to exit
 */
int main(void)
{
	int i;
	int mul3;
	int mul5;
	int sum;

	sum = 0;
	for (i = 1; ; i++)
	{
		mul3 = 3 * i;
		mul5 = 5 * i;
		if (mul3 == mul5 && mul5 < 1024)
			sum = sum + mul3;
		else
		{
			if (mul3 < 1024 && mul5 < 1024)
				sum = sum + mul3 + mul5;
			else
				break;
		}
	}
	printf("%i\n", sum);
	return (0);
}
