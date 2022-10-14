#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 to exit
*/
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
