#include <stdio.h>
/**
* main - the entry point
*
* Return: 0 to exit
*/
int main(void)
{
  int n1d1;
  int n1d2;
  int n2d1;
  int n2d2;
  for (n1d1 = 48; n1d1 <= 57; n1d1++){
    for (n1d2 = 48; n1d2 <= 57; n1d2++){
      for (n2d1 = n1d1; n2d1 <= 57; n2d1++){
	if(n2d1 == n1d1)
	  n2d2 = n1d2 + 1;
	else
	  n2d2 = 48;
	for (; n2d2 <= 57; n2d2++){
	  putchar(n1d1);
	  putchar(n1d2);
	  putchar(' ');
	  putchar(n2d1);
	  putchar(n2d2);
	  if (n1d1 == 57 && n2d1 == 57 && n2d2 == 57 && n1d2 == 56){
	    continue;
	  }
	  else{
	    putchar(',');
	    putchar(' ');
	  }
	}
      }
    }
  }
putchar(10);
return (0);
}
