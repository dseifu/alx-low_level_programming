#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 to exit
*/
int main(void)
{
int i;
char alp[] = "zyxwvutsrqponmlkjihgfedcba";
for (i = 0; i < 26; i++)
putchar(alp[i]);
putchar(10);
return (0);
}
