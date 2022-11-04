#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings at most n bytes
 * @src: the first string
 * @dest: the second string
 * @n: the number of bytes to be concatenated
 *
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
