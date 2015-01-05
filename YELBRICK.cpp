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
	int n;
	cin>>n;
	long long a,g;
	while(n!=0)
	{
		int **A=new int*[n];
		for(int i=0;i<n;i++)
		A[i]=new int[4];a=0;
		for(int i=0;i<n;i++)
		{
			cin>>A[i][0]>>A[i][1]>>A[i][2];
			A[i][3]=gcd(A[i][0],A[i][1]);
			A[i][3]=gcd(A[i][2],A[i][3]);
		}
		g=gcd(A[0][3],A[1][3]);
		for(int i=2;i<n;i++)
		g=gcd(A[i][3],g);
		g=g*g*g;
		for(int i=0;i<n;i++)
		a+=((A[i][0]*A[i][1]*A[i][2])/g);
		cout<<a<<"\n";
		cin>>n;
	}
}
