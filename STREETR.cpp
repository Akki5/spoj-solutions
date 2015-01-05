#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0)
	return b;
	return gcd(b,a%b);
}
int main()
{
	int n,s=0,g;
	cin>>n;
	int*A=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	g=A[1]-A[0];
	for(int i=2;i<n;i++)
	{
		g=gcd(g,A[i]-A[i-1]);
	}
	for(int i=1;i<n;i++)
	{
		s+=((A[i]-A[i-1])/g)-1;
	}
	cout<<s;
}
