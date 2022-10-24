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
	int sign = 1;
	int index = 0;
	char *sc;
	int num;

	if (s[0] >= 48 && s[0] <= 57)
	{
		return (atoi(s));
	}
	else
	{
		for (i = 0; i < l; i++)
		{
			if (s[i] == '-')
				sign = sign * -1;
			if (index == 0 && s[i] >= 48 && s[i] <= 57)
			{
				index = i;
				break;
			}
		}
		sc = s + index;
		num = atoi(sc);
		if (sign == -1)
			return (-num);
		else
			return (num);
	}
}
