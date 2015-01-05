#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int main()
{
       int t,a,b,c,d,res;
       scanf("%d",&t);
       for(int j=1;j<=t;j++)
       {
               scanf("%d%d",&a,&b);
               c=a;d=b;
               if(a<0)
               c*=-1;
               if(b<0)
               d*=-1;
               res=(a-b)/gcd(a,b);
               if(res<0)
               res*=-1;
               printf("%d\n",res);
       }
    return 0;
}


