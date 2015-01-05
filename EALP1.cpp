#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int t,f,n,c;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		scanf("%d",&n);
		int *A=new int[n];
		f=0;
		c=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
			f=f^A[i];
		}
		if(f==0)
		{
			printf("Case %d: 0\n",k);
			continue;
		}
		for(int i=0;i<n;i++)
		{
			if((A[i]^f)<A[i])
			c++;
		}
		printf("Case %d: %d\n",k,c);
	}

}
