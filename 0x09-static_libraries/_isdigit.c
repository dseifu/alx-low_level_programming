#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check a given character is digit or not
 * @c: the character to be checked
 *
 * Return: 1 if is is a digit 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
