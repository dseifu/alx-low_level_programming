#include "main.h"

/**
 * reverse_array - revers the content of an array
 * @a: the array
 * @n: the size of the arrat
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = t;
	}
}
