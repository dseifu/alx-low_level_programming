#include "main.h"
#include <ctype.h>
/**
 * _islower - Check if a given character is lowercase or not
 *@c: the character to be checked
 *
 * Return: 1 if lowercase 0 if not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
