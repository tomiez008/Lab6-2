#include <stdio.h>
int main(void) 
{
  int  i,sum;
  sum = 0;
  i = 12; 

  while(i <=30 ) {

	sum = (sum + i*i);
  i = i + 3;


  }
  printf("Sum is %d\n",sum);
  return 0;
}
