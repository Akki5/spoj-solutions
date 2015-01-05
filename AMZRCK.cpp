#include<iostream>
using namespace std;
int main()
{
	long long *A=new long long[45];
	A[0]=1;
	A[1]=2;
	for(int i=2;i<45;i++)
	A[i]=A[i-1]+A[i-2];
	int t,n;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		cout<<A[n]<<"\n";
	}
}
