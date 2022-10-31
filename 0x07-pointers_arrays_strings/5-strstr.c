#include "main.h"
#include <string.h>

/**
 * _strstr -  locates a substring.
 * @haystack: the string
 * @needle: the substring
 *
 * Return: a pointer
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
