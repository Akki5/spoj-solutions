#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

 int gcd(int a,int b)
 {
     if(b==0)
     return a;
     return gcd(b,a%b);
 }

int main()
{
    int t,a,b,g;
    scanf("%d",&t);
    while(t--)
    {
                 scanf("%d %d",&a,&b);
                 g=gcd(a,b);
                 printf("%d %d\n",b/g,a/g);
    }

}

