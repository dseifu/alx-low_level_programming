#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the string
 * @to: to point into
*/

void set_string(char **s, char *to)
{
	*s = to;
}
