#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a given string
 * @s: the string
 */

void rev_string(char *s)
{
	 int i;
	 int li = strlen(s) - 1;
	 char c;

	 for (i = 0; i < li; i++)
	 {
		 c = s[i];
		 s[i] = s[li];
		 s[li] = c;
		 li--;
	 }
}
