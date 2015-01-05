#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int *A=new int[32];
	for(int i=1;i<=31;i++) A[i]=i*i;
	int *B=new int[1001];
	B[1]=1;
	B[2]=2;
	int a=1;
	for(int i=3;i<=1000;i++)
	{
		if(A[a+1]<=i)
		a++;
		B[i]=10000;
		for(int j=1;j<=a;j++)
		{
			B[i]=min(B[i],B[i-A[j]]+1);
		}
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		printf("%d\n",B[a]);
	}
}
