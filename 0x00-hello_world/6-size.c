#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 to exist
*/
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char:%lu byte(s)\n", sizeof(c));
printf("Size of a int:%lu byte(s)\n", sizeof(i));
printf("Size of a long int:%lu byte(s)\n", sizeof(li));
printf("Size of a long long int:%lu byte(s)\n", sizeof(lli));
printf("Size of a float:%lu byte(s)", sizeof(f));
return (0);
}
