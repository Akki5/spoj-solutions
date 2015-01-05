#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int n,a,b;
	scanf("%d",&n);
	int *A=new int[10009];
	for(int i=0;i<10009;i++)
	A[i]=0;
	for(int k=2;k<=n;k++)
	{
		b=k;
		for(int i=2;i*i<=b;i++)
		{
			if(b%i==0)
			{
				a=0;
				while(b%i==0)
				{
					a++;
					b/=i;
				}
				A[i]+=a;
			}
		}
		if(b>1)
		A[b]++;
	}
	a=0;
	for(int i=2;i<=10000;i++)
	{
		if(A[i]>0)
		{
			if(a==0)
			{
				a=1;
				printf("%d^%d",i,A[i]);
			}
			else
			printf(" * %d^%d",i,A[i]);
		}
	}
}
