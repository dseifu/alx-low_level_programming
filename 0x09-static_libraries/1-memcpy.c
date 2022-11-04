#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: the destination
 * @src: the source
 * @n: the byte
 *
 * Return: the pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
