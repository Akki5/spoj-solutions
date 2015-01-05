#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t,n,a,res;
	scanf("%d",&t);
	long long *A=new long long[10001];
	A[1]=1;
	for(int i=2;i<=10000;i++)
	{
		a=i;
		res=i;
		for(int j=2;j*j<=a;j++)
		{
			if(a%j==0)
			{
				while(a%j==0) a/=j;
				res-=(res/j);
			}
		}
		if(a>1)
		res-=(res/a);
		A[i]=res+A[i-1];
	}
	while(t--)
	{
		scanf("%d",&n);
		long long ans=A[n]*A[n];
		printf("%llu\n",ans);
	}
}


