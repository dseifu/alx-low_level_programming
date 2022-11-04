#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to the memory
 * @b: the character
 * @n: the byte
 *
 * Return: The pointer of the memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
