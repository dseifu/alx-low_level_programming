#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitialize the first letter of each word
 * @s: the given string
 *
 * Return: a pointer to the capitillied string
 */

char *cap_string(char *s)
{
	int i;
	int l = strlen(s);
	char ws;

	for (i = 0; i < l; i++)
	{
		if (i != 0)
		{
			ws = s[i - 1];
			switch (ws)
			{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				s[i] = toupper(s[i]);
			}
		}
		else
			s[i] = toupper(s[i]);
	}
	return (s);
}
