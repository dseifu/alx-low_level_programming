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
int lastdig;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdig = n % 10;
if (lastdig == 0)
printf("Last digit of %d is %d and is 0", n, lastdig);
else if (lastdig < 6)
printf("Last digit of %d is  %d and is less than 6 and not 0", n, lastdig);
else
printf("Last digit of %d is %d and is greater than 5", n, lastdig);
return (0);
}
