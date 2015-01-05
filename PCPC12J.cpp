#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int t,n,a,max,pos;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int*A=new int[101];
		for(int i=1;i<101;i++)
		A[i]=0;
		max=-1;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			A[a]++;
			if(a>max)
			max=a;
		}
		a=0;pos=-1;
		for(int i=1;i<=max;i++)
		{
			if(A[i]%i==0)
			{
				if(A[i]>a)
				{
					a=A[i];
					pos=i;
				}
			}
		}
		if(pos==-1)
		printf("-1\n");
		else
		printf("%d\n",pos);
	}

}
