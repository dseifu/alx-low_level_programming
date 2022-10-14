#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 exit
*/
int main(void)
{
int i;
int j;
int k;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
for (k = j + 1; k <= 57; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && j == 56 && k == 57)
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
}
putchar(10);
return (0);
}
