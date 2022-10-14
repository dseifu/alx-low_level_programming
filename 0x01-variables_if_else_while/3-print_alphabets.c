#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 to exit
*/
int main(void)
{
int i;
char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; i < 52; i++)
putchar(alp[i]);
putchar(10);
return (0);
}
