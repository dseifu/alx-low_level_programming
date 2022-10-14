#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 to exit
*/
int main(void)
{
int i;
char hex[] = "0123456789abcdef";
for (i = 0; i < 16; i++)
putchar(hex[i]);
return (0);
}
