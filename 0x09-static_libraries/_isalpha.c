#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Check a character is alphnumeric
 * @c: The character to be checked
 *
 * Return: 1 if alphanumeric 0 else
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
