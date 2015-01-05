#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{

 int n,a=-1,b,c;
 int *A=new int[5001];
 scanf("%d",&n);
 scanf("%d",&b);
 if(n==1)
 printf("1\n");
 else
 {
 n--;
 while(n--)
 {
          scanf("%d",&b);
          b--;
          c=0;
          for(int i=0;i<=a;i++)
          {
                  if(b%A[i]==0)
                  {
                                c=1;
                               break;
                  }

          }
          if(c==0)
          A[++a]=b;
 }
 printf("%d\n",a+1);
}
}

