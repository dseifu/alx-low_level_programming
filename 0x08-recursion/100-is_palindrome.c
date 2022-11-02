#include "main.h"
#include <string.h>

/**
 * compare_chars - compare two characters
 * @c1: the first char
 * @c2: the second char
 *
 * Return: 1 if equal 0 if not
*/

int compare_chars(char *c1, char *c2)
{
	if (c1 == c2 || c1 > c2)
		return (1);
	if (*c1 == *c2)
		return (compare_chars(c1 + 1, c2 - 1));
	else
		return (0);
}

/**
 * is_palindrome - check a string if is is palindrome or not
 * @s: the string
 *
 * Return: 1 if it is 0 if not
*/

int is_palindrome(char *s)
{
	return (compare_chars(&s[0], &s[strlen(s) - 1]));
}
