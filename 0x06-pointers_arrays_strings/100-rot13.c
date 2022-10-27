#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rot13 - encode a string with rot13
 * @s: the string
 *
 * Return: a pointer to the encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;
	int l = strlen(s);
	char en[] = "anANboBOcpCPdqDQerERfsFSgtGThuHUivIVjwJWkxKXlyLYmzMZ";

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == en[j])
			{
				if (j % 2 == 0)
					s[i] = en[j + 1];
				else
					s[i] = en[j - 1];
				break;
			}
		}
	}
	return (s);
}
