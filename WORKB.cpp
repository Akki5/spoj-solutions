#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,b,t;
	long long a,ans;
	scanf("%d",&t);
	for(int m=1;m<=t;m++)
	{
		scanf("%d",&n);
		cin>>a;
		scanf("%d",&b);
		int *A=new int[n];
		for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
		ans=2*a;
		for(int i=0;i<n-1;i++)
		{
			if((A[i+1]-1-A[i])*b<=2*a)
			ans+=((A[i+1]-1-A[i])*b);
			else
			ans+=2*a;
		}
		ans+=b*n;
		cout<<"Case #"<<m<<": "<<ans<<"\n";
	}
}
