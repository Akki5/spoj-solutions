#include<iostream>
using namespace std;
long long comb(long long n,long long k)
{
     if(k==0)
     return 1;
     return comb(n-1,k-1)*n/k;
}
int main()
{
    long long n,k,t;
    long long res;
    scanf("%llu",&t);
    for(int i=1;i<=t;i++)
    {
            scanf("%llu%llu",&n,&k);
            res=comb(n-1,min(k-1,n-k));
            printf("%llu\n",res);
    }
    return 0;
}

