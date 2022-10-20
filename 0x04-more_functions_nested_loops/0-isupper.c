#include "main.h"

/**
 * _isupper - check to see it a given character is upper case
 * @c: The character to checked
 *
 * Return: 1 if upper case 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
