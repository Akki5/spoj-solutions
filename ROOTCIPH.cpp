#include<iostream>
using namespace std;
int main()
{
    int t;
    long long a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
            scanf("%llu%llu%llu",&a,&b,&c);
            c=(a*a)-(2*b);
            printf("%llu\n",c);
    }
    return 0;
}
