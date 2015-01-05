#include<iostream>
using namespace std;
int main()
{
    int t;
    long long n,res;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
            scanf("%llu",&n);
            res=n*(n+2)*(2*n+1)/8;
            printf("%llu\n",res);
    }
    return 0;
}

