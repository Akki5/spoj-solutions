#include<iostream>
using namespace std;
int main()
{
       long long *A=new long long[35];
       A[0]=2;
       for(int i=1;i<35;i++)
       A[i]=(A[i-1]*3)+2;
       int t,n;
       scanf("%d",&t);
       for(int j=1;j<=t;j++)
       {
               scanf("%d",&n);
                       printf("%llu\n",A[n-1]);
                       }
    return 0;
}
