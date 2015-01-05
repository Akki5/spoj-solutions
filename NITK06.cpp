#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		long long *A=new long long[n];
		for(int i=0;i<n;i++)
		scanf("%llu",&A[i]);
		int f=0;
		for(int i=1;i<n-1;i++)
		{
			if(A[i]<A[i-1])
			{
				f=1;
				break;
			}
			A[i]-=A[i-1];
		}
		if(A[n-1]!=A[n-2])
		f=1;
		if(f==1)
		printf("NO\n");
		else
		printf("YES\n");
	}
}
