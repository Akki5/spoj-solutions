#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int t,n,a,pos;
scanf("%d",&t);
long long temp;
for(int m=1;m<=t;m++)
{
	scanf("%d",&n);
	long long *A=new long long[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	if(n<11)
	{
		cout<<"Case "<<m<<": go home!\n";
		continue;
	}
	pos=0;
	a=11;
	cout<<"Case "<<m<<":";
	while(a>0)
	{
		temp=0;
		cout<<" ";
		for(int i=pos;i<=n-a;i++)
		{
			if(A[i]>temp)
			{
				temp=A[i];
				pos=i+1;
			}
		}
		cout<<temp;

		a--;
	}
	cout<<"\n";
}
}
