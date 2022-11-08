#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: a pointer
*/

int **alloc_grid(int width, int height)
{
	int **p1;
	int *p2;
	int i, j;

	if (width > 0 && height > 0)
	{
		p1 = malloc(sizeof(p1) * height);
		if (p1 != NULL)
		{
			for (i = 0; i < height; i++)
			{
				p2 = malloc(sizeof(int) * width);
				if (p2 != NULL)
				{
					p1[i] = p2;
					for (j = 0; j < width; j++)
						p1[i][j] = 0;
				}
				else
				{
					for (j = 0; j < i; j++)
						free(p1[j]);
				}
			}
			return (p1);
		}
	}
	return (NULL);
}
