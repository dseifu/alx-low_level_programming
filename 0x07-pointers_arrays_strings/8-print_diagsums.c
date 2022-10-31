#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: the matrix
 * @size: the size
*/

void print_diagsums(int *a, int size)
{
	int i;
	int d1sum = 0;
	int d2sum = 0;
	int d2dig = size - 1;

	for (i = 0; i < size; i++)
	{
		d1sum = d1sum + a[i][i];
		d2sum = d2sum + a[i][d2dig - i];
	}
	printf("%d, %d\n", d1sum, d2sum);
}
