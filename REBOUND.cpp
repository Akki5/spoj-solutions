SPOJ submission 8553063 (C++ 4.3.2) plaintext list. Status: AC, problem REBOUND, contest SPOJ. By akki5 (AAKARSH AGARWAL), 2013-01-21 18:07:15.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,c;
    long long x,y,z,d;
    double d1;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
            scanf("%llu%llu%llu",&x,&y,&z);
            d=x*x+y*(y+2*z);
            c=0;
            d1=sqrt(d);
            if(d1-int(d1)==0.0)
            {
                                         d1=(d1+x)*z/(y+2*z);
                                         if(d1-int(d1)==0)
                                         {
                                                        d=int(d1);
                                                        if(d>=0&&d<=x){
                                                   printf("%llu\n",d);
                                                   c=1;}
                                         }
            }
             if(c==0)
             printf("Not this time.\n");
    }
    return 0;
}


