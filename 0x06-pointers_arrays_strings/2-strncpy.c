#include "main.h"
#include <string.h>

/**
 * _strncpy - copy n chars from one string to the other
 * @src: the first string
 * @dest: the second string
 * @n: the number of chars to copy
 *
 * Return: return the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
