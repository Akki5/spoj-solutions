#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int *A=new int[500];
	for(int i=2;i<=sqrt(500);i++)
	{
		for(int j=i*i;j<500;j+=i)
		A[j]=1;
	}
	int *B=new int[500];
	int b=0;
	for(int i=2;i<500;i++)
	{
		if(A[i]!=1)
		B[b++]=i;
	}
	int a=0,c;
	int *C=new int[1000];
	for(int i=30;a<=1000;i++)
	{
		c=0;

		for(int j=0;j<b;j++)
		{
			if(i%B[j]==0)
			c++;
			if(c==3)
			{
				C[a++]=i;
				break;
			}
		}
	}
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<C[n-1]<<"\n";
	}
}

