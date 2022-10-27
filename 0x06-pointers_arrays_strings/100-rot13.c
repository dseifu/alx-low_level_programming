#include "main.h"
#include <string.h>

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
	char en[104] = "anANboBOcpCPdqDQerERfsFSgtGThuHUivIVjwJWkxKXlyLYmzMZ";
	char nz[] = "naNAobOBpcPCqdQDreREsfSFtgTGuhUHviVIwjWJxkXKylYLzmZM";
	strcat(en, nz);

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 104; j = j + 2)
		{
			if (s[i] == en[j])
			{
				s[i] = en[j + 1];
				break;
			}
		}
	}
	return (s);
}
