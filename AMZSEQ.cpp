#include<iostream>
using namespace std;
int main()
{
	long long *A=new long long[25];
	A[0]=1;
	A[1]=3;
	for(int i=2;i<25;i++)
	A[i]=2*A[i-1]+A[i-2];
	int n;
		cin>>n;
		cout<<A[n];
}
