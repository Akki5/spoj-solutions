#include <stdio.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    long int number;
    while(1)
    {
       scanf("%d",&number);
       if(number==-1)
       break;
       if(((number-1)%6==0))
       {
          long int div=(number-1)/6;
          long int  sum1=(long int)(ceil(2*sqrt(2*div+1))-1);
          long int  sum2=(long int)(1+floor(2*sqrt(2*div)));
          if(sum1==sum2)
          {
                         printf("Y\n");
          }
          else
          {
                       printf("N\n");
          }
       }
       else
       {
            printf("N\n");
       }

    }
    return 0;
}
