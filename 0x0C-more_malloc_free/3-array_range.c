#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the min number
 * @max: the max number
 *
 * Return: a pointer
*/

int *array_range(int min, int max)
{
	int *p = NULL;
	int i;
	int c = 0;

	if (min <= max)
	{
		p = malloc(sizeof(int) * ((max - min) + 1));
		if (p != NULL)
			for (i = min; i <= max; i++)
			{
				p[c] = i;
				c++;
			}
	}
	return (p);
}
