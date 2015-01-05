#include<stdio.h>
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double *A=new double[1001];
	A[1]=1.00;
	A[2]=3.00;
	for(int i=3;i<1001;i++)
	{
		A[i]=i*1.0;
		for(int j=2;j<=i;j++)
		A[i]+=(i*1.0)/j;
	}
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		cin>>n;
		cout<<setprecision(2)<<fixed<<A[n]<<"\n";
	}
}


