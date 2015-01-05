#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

long long C(int n, int r, int MOD)
{
    vector< vector<long long> > C(n+1,vector<long long> (r+1,0));

    for (int i=0; i<=n; i++)
    {
        for (int k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i][k] = 1;
            else
                C[i][k] = (C[i-1][k-1] + C[i-1][k])%MOD;
    }
    return C[n][r];
}

int main()
{
	int n,r;
	scanf("%d %d",&n,&r);
	if(n<r||n==0)
	printf("-1\n");
	else
	{
        printf("%lld\n",C(n-1, r-1, 10000007));
    }
    cin>>n;
}

