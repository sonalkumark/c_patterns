/*

   *
  * * 
 *   *
* * * *


*/
#include <stdio.h>

int main(void) {
  int i,j,n=5;
  for(i=0;i<n;i++)
  {
    for(j=0;j<i+n;j++)
    {
      if(i==n-1)
      {
        printf("* ");
        j++;
      }
      else
      {
          if(i+j==n-1 || (i+j)-2*i==n-1 )
       {
        printf("*");
       }
       else
        printf(" ");
        }
      
    }
    printf("\n");
  }
  return 0;
}
