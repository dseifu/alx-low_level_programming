#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 to exit
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RANSMAX / 2;
if (n > 0)
 printf("%d is positive",n);
else if (n < 0)
 printf("%d is negative",n);
else
 printf("%d is zero",n);
return (0);
}
