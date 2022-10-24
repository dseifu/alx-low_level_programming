#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - change character to integer
 * @s: the string to be changed
 *
 * Return: the changed int
 */

int _atoi(char *s)
{
	unsigned long int i;
	unsigned long int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] == ' ')
			s[i] = '+';
	}
	return (atoi(s));
}
