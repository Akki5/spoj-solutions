#include<iostream>
using namespace std;
int main()
{
    int t;
    long long n,res;
    scanf("%llu",&n);
    while(n!=0)
    {
            res=n*(n+1)*(2*n+1)/6;
            printf("%llu\n",res);
            scanf("%llu",&n);
    }
    return 0;
}
