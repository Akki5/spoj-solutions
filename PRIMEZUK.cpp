#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int t,n,m;
	long long ans,a;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		scanf("%d",&n);
		ans=1;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&m);
			ans*=m;
		}
		ans++;
		for(long long i=2;i*i<=ans;i++)
		{
			if(ans%i==0)
			{
				a=i;
				while(ans%i==0)
				ans/=i;
			}
		}
		printf("Case #%d: %llu\n",k,max(a,ans));
	}
}
