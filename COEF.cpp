#include<cstdio>
#include<iostream>
#include<math.h>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int *A=new int[14];
	A[0]=A[1]=1;
	for(int i=2;i<14;i++)
	A[i]=A[i-1]*i;
	int n,k,a,b;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		a=A[n];
		while(k--)
		{
			cin>>b;
			a=a/A[b];
		}
		cout<<a<<"\n";
	}
}
