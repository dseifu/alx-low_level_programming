#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer
 * @array: the array
 * @size: the array size
 * @cmp: a function pointer
 *
 * Return: the searched integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ii = -1;

	if (cmp != NULL && size > 0 && array != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			{
				ii = i;
				break;
			}
	return (ii);
}
