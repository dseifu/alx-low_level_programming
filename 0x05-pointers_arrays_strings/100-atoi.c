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
	int i;
	int l = strlen(s);
	char sc[] = s;

	for (i = 0; i < l; i++)
	{
		if (sc[i] == ' ')
			sc[i] = '+';
	}
	return (atoi(sc));
}
