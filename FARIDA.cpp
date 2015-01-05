#include<cstdio>
#include<iostream>
using namespace std;

long long recur(long long *A,int n,long long *B)
{
	if(n<0)
	return 0;
	long long a;
	long long b;
	if(B[n]==-1)
	{
		a=recur(A,n-2,B);
		b=recur(A,n-1,B);
		B[n]=max(A[n]+a,b);
	}
	return B[n];

}

int main()
{
int n,t;
long long ans;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
	scanf("%d",&n);
	long long *A=new long long[n];
	long long *B=new long long [n];
	for(int m=0;m<n;m++)
	B[m]=-1;
	for(int m=0;m<n;m++)
	scanf("%llu",&A[m]);
	ans=recur(A,n-1,B);
	printf("Case %d: %llu\n",i,ans);
}
}


