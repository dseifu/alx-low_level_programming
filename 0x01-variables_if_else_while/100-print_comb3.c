#include <stdio.h>
/**
* main
*
* Return: 0 to exit
*/
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar(10);
return (0);
}
